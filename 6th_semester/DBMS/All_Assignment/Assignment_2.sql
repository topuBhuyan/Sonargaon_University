create table Assignment2(
	ID          INT NOT NULL,
    NAME        VARCHAR (20) NOT NULL,
    AGE         INT NOT NULL,
    ADDRESS     CHAR (25),
    SALARY      DECIMAL (18, 2),
    PRIMARY KEY (ID)
);


insert into Assignment2 values
(10, 'Rohim', 21, 'dhaka', 2000),
(11, 'Topu', 20, 'mymenshingh', 5000),
(12, 'Arif', 22, 'Fulpur', 4000),
(13, 'Korim', 25, 'Dhaka', 7000),
(14, 'Rudra', 26, 'Nikle', 1000),
(15, 'Aabid', 24, 'Dhaka', 5000);

	/** Select **/

	select age, name, address from Assignment2;

	/** Select Into **/

	SELECT *
	INTO example
	FROM Assignment2
	WHERE NAME like 'R%';

	select * from Assignment2;

	/** Delete **/

	delete from Assignment2 where name = 'Topu';
	select * from Assignment2;

	/** Update **/

	update Assignment2 SET
	ADDRESS = 'dhaka', ID = 24
	where NAME = 'Aabid';

	select * from Assignment2;

	/** Sorting **/

	SELECT * FROM Assignment2 ORDER BY NAME;

	/** Top Clause **/

	SELECT TOP 40 PERCENT * FROM Assignment2 ORDER BY SALARY;

	/** NOT NULL **/

	ALTER TABLE Assignment1 MODIFY COLUMN ADDRESS CHAR NOT NULL;

	DESCRIBE Assignment1;

	/**Where Clause**/

	SELECT ID, NAME, SALARY FROM Assignment2 
	WHERE SALARY > 2000;

	UPDATE Assignment2 set SALARY = SALARY+10000 
	where NAME = 'Topu';

	SELECT * FROM Assignment2 WHERE NAME = 'Rudra';

	/** Top Clause **/
	SELECT TOP 4 * FROM Assignment2 ORDER BY SALARY DESC;

	/** Distinct Clause **/

	SELECT DISTINCT AGE, SALARY FROM Assignment2 ORDER BY AGE;