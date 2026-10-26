
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
        



            #include "java/lang/Object.h"
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DisplayInBrowserContraintsInterface.h"

class DisplayInBrowserContraints
            : public Object
        : public DisplayInBrowserContraintsInterface {

    private: bool frameable= false;

    private: bool mountable= false;

    private: bool quickFrameable= false;

    private: std::string mountedLink;

public: DisplayInBrowserContraints(Node node){
}


    public: bool isMountable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mountable;
    
}


    public: void setMountable(bool mountable){
this->mountable= mountable;
    
}


    public: bool isFrameable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frameable;
    
}


    public: void setFrameable(bool frameable){
this->frameable= frameable;
    
}


    public: bool isQuickFrameable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->quickFrameable;
    
}


    public: void setQuickFrameable(bool quickFrameable){
this->quickFrameable= quickFrameable;
    
}


    public: std::string getMountedLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mountedLink;
    
}


    public: void setMountedLink(std::string mountedLink){
this->mountedLink= mountedLink;
    
}


};

            

