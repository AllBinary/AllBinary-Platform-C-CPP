
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_PROPERTIES_PROPERTIESJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_PROPERTIES_PROPERTIESJPANEL_H

#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JButton.h"
#include "JTextField.h"
#include "GridLayout.h"
#include "Font.h"

class PropertiesJPanel: public javax::swing::JPanel {

public: PropertiesJPanel();

    public: void set(JPanel panel);

    private: void initComponents();

    private: javax::swing::JButton rotateJButton;

    private: javax::swing::JButton copyVerticalJButton;

    private: javax::swing::JButton leftJButton;

    private: javax::swing::JPanel rotateJPanel;

    private: javax::swing::JTextField angleJTextField;

    private: javax::swing::JPanel workAreaPropertiesJPanel;

    private: javax::swing::JPanel modifierJPanel;

    private: javax::swing::JButton upJButton;

    private: javax::swing::JPanel jPanel8;

    private: javax::swing::JButton downJButton;

    private: javax::swing::JPanel jPanel7;

    private: javax::swing::JButton rightJButton;

    private: javax::swing::JButton copyHorizontalJButton;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_PROPERTIES_PROPERTIESJPANEL_H
