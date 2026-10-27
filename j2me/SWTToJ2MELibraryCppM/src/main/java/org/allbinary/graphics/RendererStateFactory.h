
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RendererStateFactory
            : public virtual Object
         {

    private: static RendererStateFactory* instance_owner();
    private: static RendererStateFactory* instance;

    public: static RendererStateFactory* getInstance();


            
    public: RendererStateFactory();
        
    private: bool loaded = false;

    private: bool surfaceChanged = false;

    public: void setLoaded(bool loaded);

    public: bool isLoaded();

    public: void setSurfaceChanged(bool initialized);

    public: bool isSurfaceChanged();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H_COMPLETE
        
        #endif
    
