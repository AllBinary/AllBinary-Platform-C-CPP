
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
        



#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EventObject.h"
#include "MyCanvasEventSource.h"

class MyCanvasEvent: public java.util.EventObject {
        

public constructor (any = {} source){
            super(source);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public any getSource(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getSource();;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.toString();;
    
}


    public string getCommand(){

    myEventSource: MyCanvasEventSource = this.getSource() as MyCanvasEventSource;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource!.getCommand();;
    
}


    public MutableTreeNode getTreeNode(){

    myEventSource: MyCanvasEventSource = this.getSource() as MyCanvasEventSource;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource!.getTreeNode();;
    
}


    public double getAngle(){

    myEventSource: MyCanvasEventSource = this.getSource() as MyCanvasEventSource;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource!.getAngle();;
    
}


};

            

