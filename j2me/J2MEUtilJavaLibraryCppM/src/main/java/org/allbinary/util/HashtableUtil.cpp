
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/util/BasicArrayList.h"

class HashtableUtil
            : public Object
         {

    private: static HashtableUtil* instance() { static std::unique_ptr<HashtableUtil> value(new HashtableUtil()); return value.get(); }

    public: static HashtableUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashtableUtil::instance();
    
}


    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    public: void putAll(ABHashtable<Object*, Object*>* fromHashtable, ABHashtable<Object*, Object*>* hashtable){

    Enumeration<Object*>* enumeration = fromHashtable->keys();;
    

    Object* keyCanBeNull;;
    

    Object* valueCanBeNull;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
keyCanBeNull= this->enumerationUtil->nextElement(enumeration);
    
valueCanBeNull= hashtable->get(keyCanBeNull);
    

                        if(valueCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            hashtable->put(keyCanBeNull, valueCanBeNull);
    

                        }
                            
}

}


    public: std::vector<Object*> getKeysAsArray(ABHashtable<Object*, Object*>* hashtable){

    std::vector<Object*> objectArray = std::vector<Object*>(hashtable->size());;
    

    int32_t index = 0;;
    

    Enumeration<Object*>* enumeration = hashtable->keys();;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
objectArray[index++]= this->enumerationUtil->nextElement(enumeration);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public: BasicArrayList* getKeysAsList(ABHashtable<Object*, Object*>* hashtable){

    BasicArrayList* list = new BasicArrayListS(hashtable->size());;
    

    Enumeration<Object*>* enumeration = hashtable->keys();;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
list->add(this->enumerationUtil->nextElement(enumeration));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

