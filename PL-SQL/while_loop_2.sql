SET SERVEROUTPUT ON;
DECLARE
    v_test BOOLEAN := TRUE;
    v_counter NUMBER := 0;
BEGIN
    WHILE v_test LOOP
        v_counter := v_counter + 1;
        DBMS_OUTPUT.PUT_LINE(v_counter);
        -- Loop termination code
        IF v_counter = 10 THEN
            v_test := FALSE;
        END IF;
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('Outside the loop');
END;