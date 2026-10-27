
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/geological/resources/GeologicalResource.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GeologicalResource::GeologicalResource(int32_t initTotal){
this->initTotal= initTotal;
    
this->init();
    
}


    auto GeologicalResource::init() -> void{
this->setTotal(this->initTotal);
    
}


    auto GeologicalResource::add(int32_t value) -> void{

    int32_t max = Integer.MAX_VALUE;;
    

                        if(this->getTotal() +value > max)
                        
                                    {
                                    this->setTotal(max);
    

                                    }
                                
                        else {
                            this->setTotal(this->getTotal() +value);
    

                        }
                            
}


    auto GeologicalResource::remove(int32_t value) -> void{

                        if(this->getTotal() -value < 0)
                        
                                    {
                                    this->setTotal(0);
    

                                    }
                                
                        else {
                            this->setTotal(this->getTotal() -value);
    

                        }
                            
}


    auto GeologicalResource::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->total;
    
}


    auto GeologicalResource::setTotal(int32_t total) -> void{
this->total= total;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_CPP
