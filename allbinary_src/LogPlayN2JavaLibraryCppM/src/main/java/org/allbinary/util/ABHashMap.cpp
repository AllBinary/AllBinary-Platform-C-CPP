
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
        



        #ifndef ORG_ALLBINARY_UTIL_ABHASHMAP_CPP
        #define ORG_ALLBINARY_UTIL_ABHASHMAP_CPP

        #include "org/allbinary/util/ABHashMap.h"
        

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
ABHashMap<K, V>::ABHashMap() {
        }
        
    template<typename K, typename V>
auto ABHashMap<K, V>::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::size();;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::isEmpty() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::isEmpty();;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::get(Object* key) -> V{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::get(key);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::containsKey(Object* key) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::containsKey(key);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::put(K key, V value) -> V{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::put(key, value);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::putAll(Map<
                //Otherwise - typeArguments - type - WildcardType

                //Otherwise - typeArguments - type - WildcardType
>* map) -> void{
HashMap<K, V>::putAll(map);
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::remove(Object* key) -> V{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::remove(key);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::clear() -> void{
HashMap<K, V>::clear();
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::containsValue(Object* value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::containsValue(value);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::keySet() -> Set<K>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::keySet();;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::entrySet() -> Set<Entry<K, V>*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::entrySet();;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::getOrDefault(Object* key, V defaultValue) -> V{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::getOrDefault(key, defaultValue);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::putIfAbsent(K key, V value) -> V{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::putIfAbsent(key, value);;
    
}


    template<typename K, typename V>
auto ABHashMap<K, V>::clone() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashMap<K, V>::clone();;
    
}




        #endif //ORG_ALLBINARY_UTIL_ABHASHMAP_CPP
