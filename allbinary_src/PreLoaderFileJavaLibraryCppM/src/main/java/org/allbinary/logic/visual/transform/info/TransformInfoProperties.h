
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
        

    private: name: string;

    private: label: string;

    private: description: string;

    private: objectFileName: string;

    private: objectConfigFileName: string;

    private: templateFileName: string;

public constructor (string name, string label, string description, string objectFileName, string objectConfigFileName, string templateFileName);

    public setName(string value);

    public setDescription(string value);

    public setViewFile(string value);

    public setTemplateFile(string value);

    public setObjectConfigFile(string value);

    public string getName();

    public string getLabel();

    public string getDescription();

    public string getViewFile();

    public string getTemplateFile();

    public string getObjectConfigFile();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIES_H
