CC = g++
SRC_DIR = src
BUILD_DIR = build
DEBUG_DIR = $(BUILD_DIR)/debug
CFLAGS = -O2 -Wall -Wextra -Wpedantic -std=c++20
INCLUDE_FLAGS = -I/opt/homebrew/include
DEBUG_FLAGS = -g -DDEBUG
NO_WARN_FLAGS = -O2 -std=c++20
OUTPUT = calc

SRCS = $(wildcard $(SRC_DIR)/*.cc)

build:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRCS) -o $(BUILD_DIR)/$(OUTPUT)

debug:
	@mkdir -p $(DEBUG_DIR)
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $(SRCS) -o $(DEBUG_DIR)/$(OUTPUT)

no_warn:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(NO_WARN_FLAGS) $(SRCS) -o $(BUILD_DIR)/$(OUTPUT)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: build debug no_warn clean 
