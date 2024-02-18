const express = require('express');
const mysql = require('mysql');
const path = require('path');
const app = express();

app.use(express.json()); 
app.use(express.static(path.join(__dirname, 'public')));

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'index.html'));
});


const dbConnection = mysql.createConnection({
    host: "localhost",         
    user: "root",              
    password: "",              
    database: "javascript"     
});

dbConnection.connect(error => {
    if (error) throw error;
    console.log("Successfully connected to the database.");
});

app.post('/addEmployee', (req, res) => {
    const newEmployee = req.body;
    const query = "INSERT INTO postavshiki SET ?";
    dbConnection.query(query, newEmployee, (err, result) => {
        if (err) {
            res.status(500).send(err);
            return;
        }
        res.json({ message: 'Поставщик добавлен!', id: result.insertId });
    });
});