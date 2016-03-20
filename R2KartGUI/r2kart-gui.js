// Test with:
//  http-server -p 9200
//  node .

var sio = require("socket.io")();
var WebSockets = require("ws");
var argv = require("minimist")(process.argv.slice(2));

var r2state = {
    timestamp: 0,
    positionX: 0.0,
    positionY: 0.0,
    rotation: 0.0,
    obstacles: [],
    highway: false,
    ultrasound: []
};

var dataserver = new WebSockets.Server({ port: 9000 });
dataserver.on("connection", function(ws) {
    ws.on("message", function(data) {
        try {
            var jo = JSON.parse(data);
            for (i in jo) {
                r2state[i] = jo[i];
            }
        }
        catch (e) {
            // Error parsing data as JSON
        }
    });
});

var imuclient = new WebSockets.Server({ port: 9040 });
var imuclientconn;
var imudata0 = "";
var imudata1 = "";
imuclient.on("connection", function(ws) {
    imuclientconn = ws;
    ws.on("message", function(data) {
        if (data == "req") {
            ws.send(imudata0);
            ws.send(imudata1);
        }
    });
    ws.on("close", function() {
        imuclientconn = undefined;
    });
});

var imuserver = new WebSockets.Server({ port: 9050 });
imuserver.on("connection", function(ws) {
    ws.on("message", function(data) {
        // Send to sensors
        if (data[0] == "0") {
            imudata0 = data;
        }
        else if (data[0] == "1") {
            imudata1 = data;
        }
    });
});

sio.on("connection", function(socket) {
    console.log("Client connected");
    var counter = 0;
    socket.on("req", function(data) {
        socket.emit("state", r2state);
    });
    socket.on("disconnect", function() {
        console.log("Client connected");
    });
});

sio.listen(9100);
