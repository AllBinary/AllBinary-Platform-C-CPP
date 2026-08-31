
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <java/awt/event/ActionListener.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptItemInterface.h"
#include "JPopupMenu.h"
#include "JMenuItem.h"

class ProfileActionScriptItem: public DefaultMutableTreeNode: public ProfileActionScriptItemInterface, public ActionListener {
        

    private: static const EDIT: string = "Edit";

    static const DELETE: string = "Delete";

    static const NEW_CONDITION: string = "New Condition";

    static const NEW_INPUT: string = "New Input";

    static const NEW_OUTPUT: string = "New Output";

    static const NEW_COLOR_AT: string = "Color At";

    static const NEW_TIME_INTERVAL: string = "Time Interval";

    static const NEW_ALWAYS: string = "Always On/Off";

    static const NEW_KEY_INPUT: string = "Key";

    static const NEW_MOUSE_INPUT: string = "Mouse";

    static const NEW_JOYSTICK_INPUT: string = "Joystick";

    static const NEW_IMAGE_OUTPUT: string = "Image";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: jPopupMenu: JPopupMenu;

public constructor (string label, Node node){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.init();
    
this.logUtil!.putF("Label: " +label, this, this.commonStrings!.CONSTRUCTOR);
    
}


public constructor (string label){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.init();
    
this.logUtil!.putF("Label: " +label, this, this.commonStrings!.CONSTRUCTOR);
    
}


    init(){
this.setJPopupMenu(new JPopupMenu());
    

    jMenuItemEdit: JMenuItem = new JMenuItem(EDIT);;
    

    jMenuItemDelete: JMenuItem = new JMenuItem(DELETE);;
    
jMenuItemEdit!.addActionListener(this);
    
jMenuItemDelete!.addActionListener(this);
    
this.getJPopupMenu()!.add(jMenuItemEdit);
    
this.getJPopupMenu()!.add(jMenuItemDelete);
    
}


                //@Throws(Exception.constructor)
            
    public process(Long frame){



                            throw new RuntimeException();
                    
}


    public JPopupMenu getJPopupMenu(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.jPopupMenu;
    
}


    public showDialog(){



                            throw new RuntimeException();
                    
}


    public actionPerformed(ActionEvent actionEvent){

                        if(actionEvent!.getActionCommand()!.compareTo(ProfileActionScriptItem.EDIT) == 0)
                        
                                    {
                                    this.showDialog();
    

                                    }
                                
}


    public setJPopupMenu(JPopupMenu jPopupMenu){
this.jPopupMenu= jPopupMenu;
    
}


};

            

