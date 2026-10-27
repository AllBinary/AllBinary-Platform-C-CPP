
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
        



        #ifndef ORG_ALLBINARY_UTIL_ABHASHMAP_H
        #define ORG_ALLBINARY_UTIL_ABHASHMAP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
template<typename K, typename V>
class ABHashMap: public HashMap<K, V> {


            
    public: ABHashMap();
        
    public: int32_t size();

    public: bool isEmpty();

    public: V get(Object* key);
    public: V get(const std::string& key) { return get(JavaString::box(key)); }

    public: bool containsKey(Object* key);
    public: bool containsKey(const std::string& key) { return containsKey(JavaString::box(key)); }

    public: V put(K key, V value);

    public: void putAll(Map<
                //Otherwise - typeArguments - type - WildcardType

                //Otherwise - typeArguments - type - WildcardType
>* map);

    public: V remove(Object* key);
    public: V remove(const std::string& key) { return remove(JavaString::box(key)); }

    public: void clear();

    public: bool containsValue(Object* value);
    public: bool containsValue(const std::string& value) { return containsValue(JavaString::box(value)); }

    public: Set<K>* keySet();

    public: Set<Entry<K, V>*>* entrySet();

    public: V getOrDefault(Object* key, V defaultValue);
    public: V getOrDefault(const std::string& key, V defaultValue) { return getOrDefault(JavaString::box(key), defaultValue); }

    public: V putIfAbsent(K key, V value);

    public: Object* clone();

};

            

        #include "org/allbinary/util/ABHashMap.cpp"
        

        #endif //ORG_ALLBINARY_UTIL_ABHASHMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ABHASHMAP_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ABHASHMAP_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif

        #endif
    
