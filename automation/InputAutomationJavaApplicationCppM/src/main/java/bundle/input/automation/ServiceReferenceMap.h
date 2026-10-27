
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H
        #define BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Collection.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ServiceReferenceMap
            : public Object
        , public Map {

    public: static std::string toString(Map* map);

    private: ServiceReference* serviceReference;

public: ServiceReferenceMap(ServiceReference* serviceReference);

    public: int32_t size();

    public: bool isEmpty();

    public: bool containsKey(Object* key);

    public: bool containsValue(Object* value);

    public: Object* get(Object* key);

    public: Object* put(Object* key, Object* value);

    public: Object* remove(Object* key);

    public: void putAll(Map* m);

    public: void clear();

    public: Set* keySet();

    public: Collection<Object*>* values();

    public: Set* entrySet();

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H
