
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

#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
template<typename K, typename V>
class ABHashtable: public Hashtable<K, V> {

public: ABHashtable();

    public: int32_t size();

    public: bool isEmpty();

    public: Enumeration<V> elements();

    public: bool contains(Object* value);

    public: bool containsValue(Object* value);

    public: bool containsKey(Object* key);

    public: V get(Object* key);

    public: void clear();

    public: Object* clone();

    public: std::string toString();

    public: bool equals(Object* obj);

    public: int32_t hashCode();

};

            


        #endif //ORG_ALLBINARY_UTIL_ABHASHTABLE_H
