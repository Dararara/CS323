make splc


./bin/splc test/test_11710324_1.spl 
./bin/splc test/test_11710324_2.spl 
./bin/splc test/test_11710324_3.spl 
./bin/splc test/test_11710324_4.spl 
./bin/splc test/test_11710324_5.spl 


./bin/splc test-ex/test_1.spl
./bin/splc test-ex/test_2.spl
./bin/splc test-ex/test_3.spl
./bin/splc test-ex/test_4.spl
./bin/splc test-ex/test_5.spl
diff test-ex/test_1.out test-ex/test_2.out
diff test-ex/test_1.out test-ex/test_3.out
diff test-ex/test_1.out test-ex/test_4.out
diff test-ex/test_1.out test-ex/test_5.out