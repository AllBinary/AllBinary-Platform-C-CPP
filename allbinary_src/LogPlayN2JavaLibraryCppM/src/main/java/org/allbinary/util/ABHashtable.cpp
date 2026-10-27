
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
        



        #ifndef ORG_ALLBINARY_UTIL_ABHASHTABLE_CPP
        #define ORG_ALLBINARY_UTIL_ABHASHTABLE_CPP

        #include "org/allbinary/util/ABHashtable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

template<typename K, typename V>
ABHashtable<K, V>::ABHashtable() : Hashtable<K, V>(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::size();;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::isEmpty() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::isEmpty();;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::elements() -> Enumeration<V>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::elements();;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::contains(Object* value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::contains(value);;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::containsValue(Object* value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::containsValue(value);;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::containsKey(Object* key) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::containsKey(key);;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::get(Object* key) -> V{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::get(key);;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::clear() -> void{
Hashtable<K, V>::clear();
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::clone() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::clone();;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::toString();;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::equals(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::->equals(obj);;
    
}


    template<typename K, typename V>
auto ABHashtable<K, V>::hashCode() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<K, V>::hashCode();;
    
}




        #endif //ORG_ALLBINARY_UTIL_ABHASHTABLE_CPP
