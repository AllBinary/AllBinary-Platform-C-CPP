
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/RendererStateFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RendererStateFactory::RendererStateFactory() {
        }
        auto RendererStateFactory::instance_owner() -> RendererStateFactory* { static std::unique_ptr<RendererStateFactory> value(new RendererStateFactory()); return value.get(); }
RendererStateFactory* RendererStateFactory::instance = RendererStateFactory::instance_owner();

    auto RendererStateFactory::getInstance() -> RendererStateFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RendererStateFactory::instance;
    
}


    auto RendererStateFactory::setLoaded(bool loaded) -> void{
this->loaded= loaded;
    
}


    auto RendererStateFactory::isLoaded() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->loaded;
    
}


    auto RendererStateFactory::setSurfaceChanged(bool initialized) -> void{
this->surfaceChanged= initialized;
    
}


    auto RendererStateFactory::isSurfaceChanged() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->surfaceChanged;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_CPP
