
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
        



            #include <vector>
        
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

    public: static std::string toString(Map map){

    StringMaker stringBuffer = StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: ServiceReference serviceReference;

public: ServiceReferenceMap(ServiceReference serviceReference){
this->serviceReference= serviceReference;
    
}


    public: int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: bool isEmpty(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool containsKey(Object* key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool containsValue(Object* value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: Object* get(Object* key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serviceReference.getProperty(key as string);;
    
}


    public: Object* put(Object* key, Object* value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Object* remove(Object* key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void putAll(Map m){
}


    public: void clear(){
}


    public: Set keySet(){

    std::vector<std::string> keyStringArray = this->serviceReference.getPropertyKeys();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Collection<any> values(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Set entrySet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

