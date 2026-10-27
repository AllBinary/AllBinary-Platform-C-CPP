
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/swing.h>
class DefaultMutableTreeNode;
class MutableTreeNode;
class TreePath;
class CanvasTreeLabel;
class MyCanvasEvent;
class MyCanvasEventService;
class MyCanvasEventSource;
class MyGraphicItemEvent;
class MyGraphicItemEventService;
class MyGraphicItemEventSource;
class LogUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/JPanel.h"
class JTree;
class MouseAdapter;
class MouseEvent;
class JPopupMenu;
class JMenuItem;
class JScrollPane;
class PopupMenuListener;
class PopupMenuEvent;
class GridLayout;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkAreaJTreeJPanel: public javax::swing::JPanel {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: DefaultMutableTreeNode* rootTreeNode;

    private: JTree* workAreaJTree;

    private: BasicArrayList* highlightedBasicArrayList;

public: WorkAreaJTreeJPanel(std::string workAreaName);

    public: void add(MutableTreeNode* treeNode);

    public: void updateTree();

    public: BasicArrayList* getNode(std::vector<TreePath*> treePathArray);

    public: DefaultMutableTreeNode* getNode(TreePath* treePath);

                //@Throws(Exception.constructor)
            
    public: void deselectAll();

                //@Throws(Exception.constructor)
            
    public: void selectGraphicItem(DefaultMutableTreeNode* node);

                //@Throws(Exception.constructor)
            
    public: void removeGraphicItem(DefaultMutableTreeNode* node);

                //@Throws(Exception.constructor)
            
    public: void removeCanvas(DefaultMutableTreeNode* node);

                //@Throws(Exception.constructor)
            
    public: void remove(TreePath* treePath);

                //@Throws(Exception.constructor)
            
    private: void copy();

                //@Throws(Exception.constructor)
            
    private: void copy(TreePath* treePath);

                //@Throws(Exception.constructor)
            
    public: void rotate(TreePath* treePath, double angle);

    public: MutableTreeNode* getRootTreeNode();

    public: void expand();

    public: void expand(TreePath* treePath);

    private: void initComponents();

    private: void rotateJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void workAreaJTreeMousePressed(java::awt::event::MouseEvent* evt);

    private: void itemJPopupMenuPopupMenuWillBecomeInvisible(javax::swing::event::PopupMenuEvent* evt);

    private: void itemJPopupMenuPopupMenuWillBecomeVisible(javax::swing::event::PopupMenuEvent* evt);

    private: void copyJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void deleteJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void workAreaPropertiesJPanelMousePressed(java::awt::event::MouseEvent* evt);

    private: javax::swing::JMenuItem* copyJMenuItem;

    private: javax::swing::JMenuItem* deleteJMenuItem;

    private: javax::swing::JPopupMenu* itemJPopupMenu;

    private: javax::swing::JScrollPane* itemJScrollPane1;

    private: javax::swing::JMenuItem* rotateJMenuItem;

    private: javax::swing::JPanel* workAreaPropertiesJPanel;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H_COMPLETE
        #if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<javax/swing/tree/DefaultMutableTreeNode.h>)
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#endif
#if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include(<javax/swing/tree/TreePath.h>)
#include <javax/swing/tree/TreePath.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasTreeLabel.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasTreeLabel.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventSource.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventSource.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/JPanel.h")
#include "org/allbinary/graphics/j2me/workarea/JPanel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/JTree.h")
#include "org/allbinary/graphics/j2me/workarea/JTree.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/MouseAdapter.h")
#include "org/allbinary/graphics/j2me/workarea/MouseAdapter.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/MouseEvent.h")
#include "org/allbinary/graphics/j2me/workarea/MouseEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/JPopupMenu.h")
#include "org/allbinary/graphics/j2me/workarea/JPopupMenu.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/JMenuItem.h")
#include "org/allbinary/graphics/j2me/workarea/JMenuItem.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/JScrollPane.h")
#include "org/allbinary/graphics/j2me/workarea/JScrollPane.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/PopupMenuListener.h")
#include "org/allbinary/graphics/j2me/workarea/PopupMenuListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/PopupMenuEvent.h")
#include "org/allbinary/graphics/j2me/workarea/PopupMenuEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/GridLayout.h")
#include "org/allbinary/graphics/j2me/workarea/GridLayout.h"
#endif

        #endif
    
