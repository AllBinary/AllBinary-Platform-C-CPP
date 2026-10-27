
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
template<typename K, typename V>
class ABHashMap: public HashMap<K, V> {

    public: int32_t size();

    public: bool isEmpty();

    public: V get(Object* key);

    public: bool containsKey(Object* key);

    public: V put(K key, V value);

    public: void putAll(Map<
                //Otherwise - typeArguments - type - WildcardType

                //Otherwise - typeArguments - type - WildcardType
>* map);

    public: V remove(Object* key);

    public: void clear();

    public: bool containsValue(Object* value);

    public: Set<K>* keySet();

    public: Set<Entry<K, V>*>* entrySet();

    public: V getOrDefault(Object* key, V defaultValue);

    public: V putIfAbsent(K key, V value);

    public: Object* clone();

};

            


        #endif //ORG_ALLBINARY_UTIL_ABHASHMAP_H
