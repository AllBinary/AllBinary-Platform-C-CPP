
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

            #include "../../../java/lang/Object.h"
        
#include <java/util/Collection.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ServiceReferenceMap
            : public Object
        : public Map {
        

    public static string toString(Map map);

    private: serviceReference: ServiceReference;

public constructor (ServiceReference serviceReference);

    public int32_t size();

    public bool isEmpty();

    public bool containsKey(any = {} key);

    public bool containsValue(any = {} value);

    public any get(any = {} key);

    public any put(any = {} key, any = {} value);

    public any remove(any = {} key);

    public putAll(Map m);

    public clear();

    public Set keySet();

    public Collection<any> values();

    public Set entrySet();

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_H
