
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_ABHASHTABLE_H
        #define ORG_ALLBINARY_UTIL_ABHASHTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
template<typename K, typename V>
class ABHashtable: public Hashtable<K, V> {

public: ABHashtable();

    public: int32_t size();

    public: bool isEmpty();

    public: Enumeration<V>* elements();

    public: bool contains(Object* value);
    public: bool contains(const std::string& value) { return contains(JavaString::box(value)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool contains(BoxValue value) { return contains(JavaBoxes::toObject(value)); }
    public: template<typename BoxElement> bool contains(const std::vector<BoxElement>& value) { return contains(JavaBoxes::toObject(value)); }

    public: bool containsValue(Object* value);
    public: bool containsValue(const std::string& value) { return containsValue(JavaString::box(value)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool containsValue(BoxValue value) { return containsValue(JavaBoxes::toObject(value)); }
    public: template<typename BoxElement> bool containsValue(const std::vector<BoxElement>& value) { return containsValue(JavaBoxes::toObject(value)); }

    public: bool containsKey(Object* key);
    public: bool containsKey(const std::string& key) { return containsKey(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool containsKey(BoxValue key) { return containsKey(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> bool containsKey(const std::vector<BoxElement>& key) { return containsKey(JavaBoxes::toObject(key)); }

    public: V get(Object* key);
    public: V get(const std::string& key) { return get(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> V get(BoxValue key) { return get(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> V get(const std::vector<BoxElement>& key) { return get(JavaBoxes::toObject(key)); }

    public: void clear();

    public: Object* clone();

    public: std::string toString();

    public: bool equals(Object* obj);
    public: bool equals(const std::string& obj) { return equals(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool equals(BoxValue obj) { return equals(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> bool equals(const std::vector<BoxElement>& obj) { return equals(JavaBoxes::toObject(obj)); }

    public: int32_t hashCode();

};

            

        #include "org/allbinary/util/ABHashtable.cpp"
        

        #endif //ORG_ALLBINARY_UTIL_ABHASHTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ABHASHTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ABHASHTABLE_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<java/util/Hashtable.h>)
#include <java/util/Hashtable.h>
#endif
#if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif

        #endif
    
