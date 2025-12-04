DESC sysevent_audit;
SELECT * FROM sysevent_audit;
TRUNCATE TABLE sysevent_audit;

CREATE OR REPLACE TRIGGER syslogoff_audit
BEFORE LOGOFF ON SCHEMA
BEGIN
    INSERT INTO sysevent_audit VALUES(
        ora_sysevent,
        NULL,
        NULL,
        SYSDATE,
        TO_CHAR(sysdate, 'hh24:mi:ss')
    );
    COMMIT;
END;
/

SELECT * FROM sysevent_audit;
DISC;
CONN;