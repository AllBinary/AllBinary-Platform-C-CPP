
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

public: TransformInfoProperties(std::string name, std::string label, std::string description, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName){
this->name= name;
    
this->label= label;
    
this->description= description;
    
this->objectFileName= objectFileName;
    
this->templateFileName= templateFileName;
    
this->objectConfigFileName= objectConfigFileName;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setDescription(std::string value){
this->description= value;
    
}


    public: void setViewFile(std::string value){
this->objectFileName= value;
    
}


    public: void setTemplateFile(std::string value){
this->templateFileName= value;
    
}


    public: void setObjectConfigFile(std::string value){
this->objectConfigFileName= value;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->label;
    
}


    public: std::string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->description;
    
}


    public: std::string getViewFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectFileName;
    
}


    public: std::string getTemplateFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->templateFileName;
    
}


    public: std::string getObjectConfigFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectConfigFileName;
    
}


};

            

