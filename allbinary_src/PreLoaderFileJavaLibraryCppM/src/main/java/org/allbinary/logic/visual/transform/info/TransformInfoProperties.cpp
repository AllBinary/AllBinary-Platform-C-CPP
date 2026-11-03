
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TransformInfoProperties::TransformInfoProperties(std::string name, std::string label, std::string description, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName){
this->name= name;
    
this->label= label;
    
this->description= description;
    
this->objectFileName= objectFileName;
    
this->templateFileName= templateFileName;
    
this->objectConfigFileName= objectConfigFileName;
    
}


    auto TransformInfoProperties::setName(std::string value) -> void{
this->name= value;
    
}


    auto TransformInfoProperties::setDescription(std::string value) -> void{
this->description= value;
    
}


    auto TransformInfoProperties::setViewFile(std::string value) -> void{
this->objectFileName= value;
    
}


    auto TransformInfoProperties::setTemplateFile(std::string value) -> void{
this->templateFileName= value;
    
}


    auto TransformInfoProperties::setObjectConfigFile(std::string value) -> void{
this->objectConfigFileName= value;
    
}


    auto TransformInfoProperties::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto TransformInfoProperties::getLabel() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->label;
    
}


    auto TransformInfoProperties::getDescription() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->description;
    
}


    auto TransformInfoProperties::getViewFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->objectFileName;
    
}


    auto TransformInfoProperties::getTemplateFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->templateFileName;
    
}


    auto TransformInfoProperties::getObjectConfigFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->objectConfigFileName;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_CPP
