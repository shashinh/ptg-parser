grammar PTG;


ptg: (entry ( ';' entry)* )? (NEWLINE | EOF);
entry: bciKey ':' '(' vars   ')' ('(' fields ')')?;

vars: (varentry (',' varentry)*)?;
varentry : bciKey ':' ( (ciBciEntry) (' ' (ciBciEntry))*);
fields: (fieldentry (',' fieldentry)*)?;
fieldentry : bciKeyField '.' field ':' ( (bciVal) (' ' bciVal)*);
ciBciEntry: callerIndex '-' ( (bciVal)('.' (bciVal))*) | STRING | CONST | NIL;


callerIndex : NUMS;
bciKey: ALL | NUMS;
bciVal : NUMS | NIL;
bciKeyField: NUMS;
field : ALPHAS;

NIL : 'n';
STRING: 's';
CONST: 'c';
NUMS: [0-9]+;
ALPHAS: [A-Za-z]+;
NEWLINE: [\r\n]+;
ALL: [A-Za-z<>-]+;
