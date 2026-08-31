
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
        



            #include "../../../../../../../java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyCanvasEventSource
            : public Object
         {
        

    private: command: string;

    private: treeNode: MutableTreeNode;

    private: angle: double = 0;

public constructor (string command, MutableTreeNode treeNode){

            super();
        this.command= command;
    
this.treeNode= treeNode;
    
}


public constructor (string command, double angle, MutableTreeNode treeNode){

            super();
        this.command= command;
    
this.treeNode= treeNode;
    
this.setAngle(angle);
    
}


    public string getCommand(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.command;
    
}


    public MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.treeNode;
    
}


    public double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angle;
    
}


    public setAngle(double angle){
this.angle= angle;
    
}


};

            

