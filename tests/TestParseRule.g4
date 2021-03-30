grammar TestParseRule;

r : 'hello' ID;
s : r | WS;
ID : 'ID';
WS : ' ';