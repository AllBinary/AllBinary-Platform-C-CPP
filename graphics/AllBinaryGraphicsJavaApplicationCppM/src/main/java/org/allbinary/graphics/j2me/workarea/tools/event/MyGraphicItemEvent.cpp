
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/event/EventObject.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventSource.h"

class MyGraphicItemEvent: public java::util::EventObject {

public: MyGraphicItemEvent(Object* source) : java::util::EventObject(source){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: Object* getSource(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getSource();;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.toString();;
    
}


    public: std::string getCommand(){

    MyGraphicItemEventSource* myEventSource = dynamic_cast<MyGraphicItemEventSource*>(this->getSource());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource->getCommand();;
    
}


    public: MutableTreeNode* getTreeNode(){

    MyGraphicItemEventSource* myEventSource = dynamic_cast<MyGraphicItemEventSource*>(this->getSource());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource->getTreeNode();;
    
}


    public: double getAngle(){

    MyGraphicItemEventSource* myEventSource = dynamic_cast<MyGraphicItemEventSource*>(this->getSource());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource->getAngle();;
    
}


};

            

