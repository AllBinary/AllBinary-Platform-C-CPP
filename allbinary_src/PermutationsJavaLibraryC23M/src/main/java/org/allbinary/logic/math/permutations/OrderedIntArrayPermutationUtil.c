// Generated Code Do Not Modify
#include "org/allbinary/logic/math/permutations/OrderedIntArrayPermutationUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/math/permutations/IntPermutationVisitor.h"


static OrderedIntArrayPermutationUtil* OrderedIntArrayPermutationUtil_instance;








void OrderedIntArrayPermutationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OrderedIntArrayPermutationUtil_instance = OrderedIntArrayPermutationUtil_new();
}

void OrderedIntArrayPermutationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OrderedIntArrayPermutationUtil", nullptr);
    java_register_method("OrderedIntArrayPermutationUtil", "getNext", (void*) OrderedIntArrayPermutationUtil_getNext);
    java_register_method("OrderedIntArrayPermutationUtil", "swap", (void*) OrderedIntArrayPermutationUtil_swap);
    java_register_method("OrderedIntArrayPermutationUtil", "factorial", (void*) OrderedIntArrayPermutationUtil_factorial);
    java_register_method("OrderedIntArrayPermutationUtil", "generate", (void*) OrderedIntArrayPermutationUtil_generate);
}

static void OrderedIntArrayPermutationUtil_initFields(OrderedIntArrayPermutationUtil* this) {
    this->TOTAL_ITERATIONS_TABLE = "Total Iterations: ";
    this->FINISHED = "\nFINISHED";
}


OrderedIntArrayPermutationUtil* OrderedIntArrayPermutationUtil_getInstance(void) {
        return (OrderedIntArrayPermutationUtil_staticInit(), OrderedIntArrayPermutationUtil_instance);
}


void OrderedIntArrayPermutationUtil_init(OrderedIntArrayPermutationUtil* this) {
    OrderedIntArrayPermutationUtil_register();
    OrderedIntArrayPermutationUtil_initFields(this);
}

OrderedIntArrayPermutationUtil* OrderedIntArrayPermutationUtil_new(void) {
    OrderedIntArrayPermutationUtil* this = java_object_alloc(sizeof(OrderedIntArrayPermutationUtil), "OrderedIntArrayPermutationUtil");
    OrderedIntArrayPermutationUtil_init(this);
    return this;
}


void OrderedIntArrayPermutationUtil_getNext(OrderedIntArrayPermutationUtil* this, int32_t* data) {
        int32_t length = java_array_length(data);
        int32_t i = length - 1;
        while (data[i - 1] >= data[i]) {
            i = i - 1;
        }
        int32_t j = length;
        while (data[j - 1] <= data[i - 1]) {
            j = j - 1;
        }
        OrderedIntArrayPermutationUtil_swap(this, data, i - 1, j - 1);
        i++;
        j = length;
        while (i < j) {
            OrderedIntArrayPermutationUtil_swap(this, data, i - 1, j - 1);
            i++;
            j--;
        }
}


void OrderedIntArrayPermutationUtil_swap(OrderedIntArrayPermutationUtil* this, int32_t* data, int32_t a, int32_t b) {
        int32_t temp = data[a];
        data[a] = data[b];
        data[b] = temp;
}


int64_t OrderedIntArrayPermutationUtil_factorial(OrderedIntArrayPermutationUtil* this, int32_t dataLength) {
        int64_t temp = 1LL;
        if (dataLength > 1) {
            for (int32_t i = 1; i <= dataLength; i++) {
                temp *= ((int64_t) i);
            }
        }
        return temp;
}


void OrderedIntArrayPermutationUtil_generate(OrderedIntArrayPermutationUtil* this, int32_t* data, Visitor* visitor) {
        int64_t iterations = OrderedIntArrayPermutationUtil_factorial(this, java_array_length(data));
        fputs(java_string_of(this->TOTAL_ITERATIONS_TABLE), stdout);
        puts(java_string_of(iterations));
        for (int64_t count = 0LL; count < iterations - 1LL; count++) {
            OrderedIntArrayPermutationUtil_getNext(this, data);
            Visitor_visit(visitor, this);
        }
        puts(java_string_of(this->FINISHED));
}


void OrderedIntArrayPermutationUtil_main(const char** args) {
        int32_t TOTAL = 3;
        int32_t* data = ((int32_t*) java_array_new(sizeof(int32_t), TOTAL));
        for (int32_t i = 0; i < TOTAL; i++) {
            data[i] = i;
        }
        IntPermutationVisitor* permutationVisitor = IntPermutationVisitor_new(data);
        const char* ORIGINAL_DATA_LABEL = "Original Data: ";
        fputs(java_string_of(ORIGINAL_DATA_LABEL), stdout);
        IntPermutationVisitor_print(permutationVisitor, data, StringMaker_new());
        OrderedIntArrayPermutationUtil_generate(OrderedIntArrayPermutationUtil_getInstance(), data, permutationVisitor);
}

