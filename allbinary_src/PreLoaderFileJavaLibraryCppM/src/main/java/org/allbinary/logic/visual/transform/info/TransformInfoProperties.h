
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoProperties
            : public Object
         {

    private: std::string name;

    private: std::string label;

    private: std::string description;

    private: std::string objectFileName;

    private: std::string objectConfigFileName;

    private: std::string templateFileName;

public: TransformInfoProperties(std::string name, std::string label, std::string description, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName);

    public: void setName(std::string value);

    public: void setDescription(std::string value);

    public: void setViewFile(std::string value);

    public: void setTemplateFile(std::string value);

    public: void setObjectConfigFile(std::string value);

    public: std::string getName();

    public: std::string getLabel();

    public: std::string getDescription();

    public: std::string getViewFile();

    public: std::string getTemplateFile();

    public: std::string getObjectConfigFile();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_H
