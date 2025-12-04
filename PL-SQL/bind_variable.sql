SET SERVEROUTPUT ON;
VARIABLE v_bind1 VARCHAR2(15);
EXEC :v_bind1 := 'Hello World!';
PRINT :v_bind1;
-- 2nd way of initializing bind variable
BEGIN
    :v_bind1 := 'Bye World!';
    DBMS_OUTPUT.PUT_LINE(:v_bind1);
END;