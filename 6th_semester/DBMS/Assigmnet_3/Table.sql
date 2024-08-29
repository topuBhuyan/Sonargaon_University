create database topuBhuyan
use topuBhuyan 

CREATE TABLE myLab (
   ID INT NOT NULL,
   NAME VARCHAR (20) NOT NULL,
   Department CHAR (25), 
   AGE INT NOT NULL,
   Gender CHAR (25),
   Bload CHAR (10),
   PRIMARY KEY (ID)
);

INSERT INTO myLab VALUES 
(7033, 'Aabid', 'CSE', 21, 'Male','B+' ),
(6105, 'Mehedi','CSE', 22,'Male', 'A+' ),
(5051, 'Nazmul','MBA', 21, 'Male', 'O-' ),
(6106, 'Arif', 'CSE', 22,'Male', 'AB+' ),
(6024, 'Topu', 'CSE', 21, 'Male', 'AB+' ),
(8083, 'Insan','EEE', 22, 'Male', 'O+' );

SELECT * FROM myLab; 

UPDATE myLab
SET Department = 'EEE', ID = 6024
WHERE NAME = 'Topu';

SELECT * FROM myLab WHERE NAME = 'Topu';

SELECT * FROM myLab;

DELETE FROM myLab WHERE NAME= 'Nazmul';


CREATE TABLE myLab2(
   ID INT NOT NULL,
   NAME VARCHAR (20) NOT NULL,
   Department CHAR (25), 
   AGE INT NOT NULL,
   Gender CHAR (25),
   Bload CHAR (10),
   PRIMARY KEY (ID)
);

SELECT AGE, Bload FROM myLab;


