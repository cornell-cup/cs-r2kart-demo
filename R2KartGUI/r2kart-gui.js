// Test with:
//  http-server -p 9200
//  node .

var sio = require("socket.io")();
var net = require("net");
var argv = require('minimist')(process.argv.slice(2));

var r2state = {
    timestamp: 0,
    positionX: 0.0,
    positionY: 0.0,
    rotation: 0.0,
    obstacles: [],
    highway: false,
    ultrasound: {}
};

var server = net.createServer(function(conn) {
    console.log("Provider connected");
    conn.on("data", function(data) {
        console.log(data.toString());
    });
    conn.on("end", function() {
        console.log("Provider disconnected");
    });
});

sio.on("connection", function(socket) {
    console.log("Client connected");
    var counter = 0;
    socket.on("req", function(data) {
        var time = Date.now();
        r2state.timestamp = time;
        var angle = (r2state.timestamp / 1200.0) % (2.0 * Math.PI);
        r2state.positionX = 100 * Math.cos(angle);
        r2state.positionY = 100 * Math.sin(angle);
        r2state.rotation = -angle;
        socket.emit("state", r2state);
    });
    socket.on("disconnect", function() {
        console.log("Client connected");
    });
});

server.listen(9000);
sio.listen(9100);
