
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto OpenGLESImageExclusionUtil::instance_owner() -> OpenGLESImageExclusionUtil* { static std::unique_ptr<OpenGLESImageExclusionUtil> value(new OpenGLESImageExclusionUtil()); return value.get(); }
OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil::instance = OpenGLESImageExclusionUtil::instance_owner();

    auto OpenGLESImageExclusionUtil::getInstance() -> OpenGLESImageExclusionUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLESImageExclusionUtil::instance;
    
}


OpenGLESImageExclusionUtil::OpenGLESImageExclusionUtil() : list(new BasicArrayListD()){
}


    auto OpenGLESImageExclusionUtil::isCustomScaling(Image* image) -> bool{

    std::string imageName = image->getName();;
    

    bool isNormalScaling = this->list->size() == 0 || JavaString::startsWith(imageName, this->EXCLUSION);;
    

                        if(isNormalScaling)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            
    int32_t size = this->list->size();;
    

    std::string name;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
name= JavaBoxes::unbox<std::string>(this->list->get(index));
    

                        if(JavaString::startsWith(imageName, name))
                        
                                    {
                                    isNormalScaling= true;
    

                                    }
                                
}


                        }
                            

                        if(isNormalScaling)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_CPP
