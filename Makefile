example: example.c monotonic_timer.c monotonic_timer.h
	gcc $^ -o $@

.PHONY: run
run: example
	./example
