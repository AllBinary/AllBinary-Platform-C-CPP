
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TouchButtonFactory::SINGLETON_owner() -> TouchButtonFactory* { static std::unique_ptr<TouchButtonFactory> value(new TouchButtonFactory()); return value.get(); }
TouchButtonFactory* TouchButtonFactory::SINGLETON = TouchButtonFactory::SINGLETON_owner();

    auto TouchButtonFactory::getInstance() -> TouchButtonFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TouchButtonFactory::SINGLETON;
    
}


TouchButtonFactory::TouchButtonFactory() : LIST(BasicArrayListUtil::getInstance()->getImmutableInstance()), list(this->LIST), savedList(this->LIST){
}


    auto TouchButtonFactory::defaultList() -> void{
this->list= this->LIST;
    
this->toggle(false, this->LIST);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TouchButtonFactory::toggle(bool save, BasicArrayList* list) -> void{

                        if(list != BasicArrayListUtil::getInstance()->getImmutableInstance())
                        
                                    {
                                    this->savedList= list;
    

                        if(!this->saved)
                        
                                    {
                                    this->list= this->savedList;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(save)
                        
                                    {
                                    
                        if(!this->saved)
                        
                                    {
                                    this->saved= true;
    
this->savedList= this->list;
    
this->list= this->LIST;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            this->list= this->savedList;
    
this->saved= false;
    

                        }
                            

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonFactory::setList(BasicArrayList* list) -> void{

                        if(list == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Null List");
                    

                                    }
                                
this->list= list;
    
}


    auto TouchButtonFactory::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_CPP
