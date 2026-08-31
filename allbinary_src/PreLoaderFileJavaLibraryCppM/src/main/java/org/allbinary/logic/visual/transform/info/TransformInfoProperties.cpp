
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
        

    private: name: string;

    private: label: string;

    private: description: string;

    private: objectFileName: string;

    private: objectConfigFileName: string;

    private: templateFileName: string;

public constructor (string name, string label, string description, string objectFileName, string objectConfigFileName, string templateFileName){

            super();
        this.name= name;
    
this.label= label;
    
this.description= description;
    
this.objectFileName= objectFileName;
    
this.templateFileName= templateFileName;
    
this.objectConfigFileName= objectConfigFileName;
    
}


    public setName(string value){
this.name= value;
    
}


    public setDescription(string value){
this.description= value;
    
}


    public setViewFile(string value){
this.objectFileName= value;
    
}


    public setTemplateFile(string value){
this.templateFileName= value;
    
}


    public setObjectConfigFile(string value){
this.objectConfigFileName= value;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.label;
    
}


    public string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.description;
    
}


    public string getViewFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectFileName;
    
}


    public string getTemplateFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.templateFileName;
    
}


    public string getObjectConfigFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectConfigFileName;
    
}


};

            

