SET SERVEROUTPUT ON;
DECLARE
    v_counter NUMBER := 0;
    v_result NUMBER;
BEGIN
    WHILE v_counter <= 10 LOOP
        v_result := 19 * v_counter;
        DBMS_OUTPUT.PUT_LINE('19 ' || 'x ' || v_counter || ' = ' || v_result);
        v_counter := v_counter + 1;
    END LOOP;
END;