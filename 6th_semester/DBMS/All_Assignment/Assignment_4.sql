create table Assignment(
	ID          INT NOT NULL,
    NAME        VARCHAR (20) NOT NULL,
    AGE         INT NOT NULL,
    ADDRESS     CHAR (25),
    SALARY      DECIMAL (18, 2),
    PRIMARY KEY (ID)
);

insert into Assignment values
(10, 'Rohim', 21, 'dhaka', 2000),
(11, 'Topu', 20, 'mymenshingh', 5000),
(12, 'Arif', 22, 'Fulpur', 4000),
(13, 'Korim', 25, 'Dhaka', 7000),
(14, 'Rudra', 26, 'Nikle', 1000),
(15, 'Aabid', 24, 'Dhaka', 5000);

	/** In Query **/

	select * from Assignment 
	where ID in(10, 11, 13, 15);
	
	select * from Assignment;

		/** Update In Query **/

	update Assignment set ADDRESS = 'Comilla' where ADDRESS in ('Dhaka');
	select * from Assignment;

	/** Not In Query **/

	select * from Assignment where AGE NOT IN (20, 22, 25); /* ai age gula bad a sob gula asbe */
	select * from Assignment;

	/** Between Query **/

	select * from Assignment where AGE BETWEEN 20 and 22; /* 20 thake 22 ar vitorer age gula asebe */
	select * from Assignment;


	/** ANY Operator **/

	SELECT * FROM Assignment 
	WHERE SALARY <> 
	ALL (SELECT SALARY FROM Assignment WHERE AGE = 22);

	/** All **/

	SELECT * FROM Assignment 
	WHERE SALARY <> 
	ALL (SELECT SALARY FROM Assignment WHERE AGE = 25);

	/** Count **/

	select count(*) from Assignment;

	/**Groping Count**/

	select SALARY, count (*) from Assignment group by SALARY;

	/** Greater than **/

	select count(SALARY) from Assignment where SALARY > 5000;

	/** Sum **/

	select SUM(SALARY) from Assignment;

	/** AVG **/

	select AVG(SALARY) FROM Assignment;

	/** MAX **/

	select MAX (SALARY) from Assignment;

	/** MIN **/
	select MIN (AGE) from Assignment;

	/** like operator **/

	select * from Assignment where SALARY like '500%';


