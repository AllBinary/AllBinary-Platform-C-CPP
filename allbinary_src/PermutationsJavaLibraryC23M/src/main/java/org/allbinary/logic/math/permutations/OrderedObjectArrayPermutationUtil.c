// Generated Code Do Not Modify
#include "org/allbinary/logic/math/permutations/OrderedObjectArrayPermutationUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/logic/math/permutations/ComparableObject.h"
#include "org/allbinary/logic/math/permutations/ObjectPermutationVisitor.h"


static OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_instance;








void OrderedObjectArrayPermutationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OrderedObjectArrayPermutationUtil_instance = OrderedObjectArrayPermutationUtil_new();
}

void OrderedObjectArrayPermutationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OrderedObjectArrayPermutationUtil", nullptr);
    java_register_method("OrderedObjectArrayPermutationUtil", "getNext", (void*) OrderedObjectArrayPermutationUtil_getNext);
    java_register_method("OrderedObjectArrayPermutationUtil", "swap", (void*) OrderedObjectArrayPermutationUtil_swap);
    java_register_method("OrderedObjectArrayPermutationUtil", "factorial", (void*) OrderedObjectArrayPermutationUtil_factorial);
    java_register_method("OrderedObjectArrayPermutationUtil", "generate", (void*) OrderedObjectArrayPermutationUtil_generate);
}

static void OrderedObjectArrayPermutationUtil_initFields(OrderedObjectArrayPermutationUtil* this) {
    this->TOTAL_ITERATIONS_TABLE = "Total Iterations: ";
    this->FINISHED = "\nFINISHED";
}


OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_getInstance(void) {
        return (OrderedObjectArrayPermutationUtil_staticInit(), OrderedObjectArrayPermutationUtil_instance);
}


void OrderedObjectArrayPermutationUtil_init(OrderedObjectArrayPermutationUtil* this) {
    OrderedObjectArrayPermutationUtil_register();
    OrderedObjectArrayPermutationUtil_initFields(this);
}

OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_new(void) {
    OrderedObjectArrayPermutationUtil* this = java_object_alloc(sizeof(OrderedObjectArrayPermutationUtil), "OrderedObjectArrayPermutationUtil");
    OrderedObjectArrayPermutationUtil_init(this);
    return this;
}


void OrderedObjectArrayPermutationUtil_getNext(OrderedObjectArrayPermutationUtil* this, void** data) {
        int32_t length = java_array_length(data);
        int32_t i = length - 1;
        TsUtil* tsUtil = TsUtil_getInstance();
        while (TsUtil_hashCode(tsUtil, data[i - 1]) >= TsUtil_hashCode(tsUtil, data[i])) {
            i = i - 1;
        }
        int32_t j = length;
        while (TsUtil_hashCode(tsUtil, data[j - 1]) <= TsUtil_hashCode(tsUtil, data[i - 1])) {
            j = j - 1;
        }
        OrderedObjectArrayPermutationUtil_swap(this, data, i - 1, j - 1);
        i++;
        j = length;
        while (i < j) {
            OrderedObjectArrayPermutationUtil_swap(this, data, i - 1, j - 1);
            i++;
            j--;
        }
}


void OrderedObjectArrayPermutationUtil_swap(OrderedObjectArrayPermutationUtil* this, void** data, int32_t a, int32_t b) {
        void* temp = data[a];
        data[a] = data[b];
        data[b] = temp;
}


int64_t OrderedObjectArrayPermutationUtil_factorial(OrderedObjectArrayPermutationUtil* this, int32_t dataLength) {
        int64_t temp = 1LL;
        if (dataLength > 1) {
            for (int32_t i = 1; i <= dataLength; i++) {
                temp *= ((int64_t) i);
            }
        }
        return temp;
}


void OrderedObjectArrayPermutationUtil_generate(OrderedObjectArrayPermutationUtil* this, void** data, Visitor* visitor) {
        int64_t iterations = OrderedObjectArrayPermutationUtil_factorial(this, java_array_length(data));
        fputs(java_string_of(this->TOTAL_ITERATIONS_TABLE), stdout);
        puts(java_string_of(iterations));
        for (int64_t count = 0LL; count < iterations - 1LL; count++) {
            OrderedObjectArrayPermutationUtil_getNext(this, data);
            Visitor_visit(visitor, this);
        }
        puts(java_string_of(this->FINISHED));
}


void OrderedObjectArrayPermutationUtil_main(const char** args) {
        int32_t TOTAL = 7;
        void** data = ((void**) java_array_new(sizeof(void*), TOTAL));
        for (int32_t i = 0; i < TOTAL; i++) {
            data[i] = ComparableObject_new();
        }
        Arrays_sort(data);
        ObjectPermutationVisitor* permutationVisitor = ObjectPermutationVisitor_new(data);
        const char* ORIGINAL_DATA_LABEL = "Original Data: ";
        fputs(java_string_of(ORIGINAL_DATA_LABEL), stdout);
        ObjectPermutationVisitor_visit(permutationVisitor, data);
        OrderedObjectArrayPermutationUtil_generate(OrderedObjectArrayPermutationUtil_getInstance(), data, permutationVisitor);
}

