create table Assignment1(
	ID          INT NOT NULL,
    NAME        VARCHAR (20) NOT NULL,
    AGE         INT NOT NULL,
    ADDRESS     CHAR (25),
    SALARY      DECIMAL (18, 2),
    PRIMARY KEY (ID)
);


insert into Assignment1 values
(10, 'Rohim', 21, 'dhaka', 2000),
(11, 'Topu', 20, 'mymenshingh', 5000),
(12, 'Arif', 22, 'Fulpur', 4000),
(13, 'Korim', 25, 'Dhaka', 7000),
(14, 'Rudra', 26, 'Nikle', 1000),
(15, 'Aabid', 24, 'Dhaka', 5000);


	/** Create Databasee **/

	CREATE DATABASE DatabaseName; /* New data base create hobe */

	/** Drope Database **/

	DROP DATABASE Assignment1; 	/* data base delete hy jabe */


	/** INSERT **/

	INSERT INTO Assignment1 
	VALUES (16, 'Mehidi', 22, 'bhuyan', 8000.00 ); /* new data Add hobe */

	select * from Assignment1;

	/** Delete Queary **/

	delete from Assignment1;
	/*---------------------*/
	DELETE FROM Assignment1 WHERE NAME='Topu';


