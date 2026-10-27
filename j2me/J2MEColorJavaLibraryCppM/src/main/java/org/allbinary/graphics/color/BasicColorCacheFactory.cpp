
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

class BasicColorCacheFactory
            : public Object
         {

    private: static BasicColorCacheFactory* instance() { static std::unique_ptr<BasicColorCacheFactory> value(new BasicColorCacheFactory()); return value.get(); }

    public: static BasicColorCacheFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorCacheFactory::instance();
    
}


    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

private: BasicColorCacheFactory(){
}


    public: void add(BasicColor* basicDefaultColor){
this->hashtable->put(int32_t(basicDefaultColor->intValue()), basicDefaultColor);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: BasicColor* getAndOrCreate(int32_t integer){

    BasicColor* basicColor = dynamic_cast<BasicColor*>(this->hashtable->get(integer));;
    

                        if(basicColor == 
                                    nullptr
                                )
                        
                                    {
                                    basicColor= BasicColorFactory::getInstance()->createInstance(integer.intValue());
    
this->hashtable->put(integer, basicColor);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicColor;
    
}


};

            

