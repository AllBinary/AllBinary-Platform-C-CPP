
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
        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EnumerationUtil.h"
#include "ABHashtable.h"
#include "BasicArrayListS.h"
#include "BasicArrayList.h"

class HashtableUtil
            : public Object
         {

    private: static HashtableUtil instance() { return HashtableUtil(); }

    public: static HashtableUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashtableUtil::instance();
    
}


    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    public: void putAll(ABHashtable<Object*, Object*> fromHashtable, ABHashtable<Object*, Object*> hashtable){

    Enumeration<Object*> enumeration = fromHashtable.keys();;
    

    Object* keyCanBeNull;;
    

    Object* valueCanBeNull;;
    

        while(this->enumerationUtil.hasMoreElements(enumeration))
        {
keyCanBeNull= this->enumerationUtil.nextElement(enumeration);
    
valueCanBeNull= hashtable.get(keyCanBeNull);
    

                        if(valueCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            hashtable.put(keyCanBeNull, valueCanBeNull);
    

                        }
                            
}

}


    public: std::vector<Object*> getKeysAsArray(ABHashtable<Object*, Object*> hashtable){

    std::vector<Object*> objectArray = std::vector<Object*>(hashtable.size());;
    

    int32_t index = 0;;
    

    Enumeration<Object*> enumeration = hashtable.keys();;
    

        while(this->enumerationUtil.hasMoreElements(enumeration))
        {
objectArray[index++]= this->enumerationUtil.nextElement(enumeration);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public: BasicArrayList getKeysAsList(ABHashtable<Object*, Object*> hashtable){

    BasicArrayList list = BasicArrayListS(hashtable.size());;
    

    Enumeration<Object*> enumeration = hashtable.keys();;
    

        while(this->enumerationUtil.hasMoreElements(enumeration))
        {
list.add(this->enumerationUtil.nextElement(enumeration));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

