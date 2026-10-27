
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/tools/JButton.h"
#include "org/allbinary/graphics/j2me/workarea/tools/JList.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GridLayout.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Font.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseAdapter.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h"
#include "org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h"

class ToolJPanel: public javax::swing::JPanel {

public: ToolJPanel();

    private: void initComponents();

    private: void dottedFillRountRectJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void dottedFillArcJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void dottedFillRectJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void dottedArcJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void dottedRectButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void dottedLineJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void fillRoundRectJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void fillRectJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void fillArcJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void imageJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void roundRectJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void charJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void stringJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void arcJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void rectJButtonMouseClicked(java::awt::event::MouseEvent* evt);

    private: void lineJButtonMouseClicked(java::awt::event::MouseEvent* evt);

    private: javax::swing::JButton* arcJButton;

    private: javax::swing::JButton* charJButton;

    private: javax::swing::JList* colorJList;

    private: javax::swing::JPanel* colorJPanel;

    private: javax::swing::JButton* dottedArcJButton;

    private: javax::swing::JButton* dottedFillArcJButton;

    private: javax::swing::JButton* dottedFillRectJButton;

    private: javax::swing::JButton* dottedFillRountRectJButton;

    private: javax::swing::JButton* dottedLineJButton;

    private: javax::swing::JButton* dottedRectButton;

    private: javax::swing::JButton* fillArcJButton;

    private: javax::swing::JButton* fillRectJButton;

    private: javax::swing::JButton* fillRoundRectJButton;

    private: javax::swing::JButton* imageJButton;

    private: javax::swing::JButton* lineJButton;

    private: javax::swing::JButton* rectJButton;

    private: javax::swing::JButton* roundRectJButton;

    private: javax::swing::JButton* stringJButton;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_H
