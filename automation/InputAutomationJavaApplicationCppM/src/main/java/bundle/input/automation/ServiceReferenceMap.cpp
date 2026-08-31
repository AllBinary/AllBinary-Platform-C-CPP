
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
        

    public static string toString(Map map){

    stringBuffer: StringMaker = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    private: serviceReference: ServiceReference;

public constructor (ServiceReference serviceReference){

            super();
        this.serviceReference= serviceReference;
    
}


    public int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public bool isEmpty(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool containsKey(any = {} key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool containsValue(any = {} value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public any get(any = {} key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.serviceReference!.getProperty(key as string);;
    
}


    public any put(any = {} key, any = {} value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public any remove(any = {} key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public putAll(Map m){
}


    public clear(){
}


    public Set keySet(){

    keyStringArray: std::vector<string> = this.serviceReference!.getPropertyKeys()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Collection<any> values(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Set entrySet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

