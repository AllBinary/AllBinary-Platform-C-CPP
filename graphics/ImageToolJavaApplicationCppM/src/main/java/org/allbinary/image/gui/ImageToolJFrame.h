
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/io/File.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
class ImageIO;
class FileJDialog;
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>
class LogUtil;
class ImageProcessorInput;
class ImageProcessorInputCompositeInterface;
class ColorRange;
class ColorRangeInterface;
class ImageAnalysis;
class ImageAnalysisResults;
class CommonPhoneStrings;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JFrame.h"
class JDialog;
class JLabel;
class JTextField;
class JButton;
class JPanel;
class JMenuBar;
class JMenu;
class JMenuItem;
class Dimension;
class ActionListener;
class ActionEvent;
class GroupLayout;
class Short;
class GridLayout;
class ImageUnifierJPanel;
class ImageAnalysisResultsJPanel;
class RotationSpriteImageJPanel;
class SpriteSplitterImageJPanel;
class RotationImageJPanel;
class ResizeImageJPanel;
class CreateIconImagesJPanel;
class CanvasImageJPanel;
class MirrorSpriteImageJPanel;
class MirrorImageJPanel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageToolJFrame: public javax::swing::JFrame, public FileJDialogListenerInterface {

    private: static inline ImageProcessorInputCompositeInterface* imageProcessorInputCompositeInterface;

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: FileJDialog* fileJDialog;

    private: ImageProcessorInput* imageProcessorInput;

public: ImageToolJFrame();

    private: void initComponents();

    private: void createStripImageJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void processingJMenuActionPerformed(java::awt::event::ActionEvent* evt);

    private: void openImageJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    public: void onFiles(std::vector<File*> files);

    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent* evt);

    private: void analyzeJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void generateRotationSpriteJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void generateSpriteSplitterMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void generateRotationMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void scaleImagesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void createIconsJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void canvasImagesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void generateMirrorSpriteMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void mirrorJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: ColorRangeInterface* getColorRangeInterface();

    public: javax::swing::JTextField* getMaxBlueJTextField();

    public: void setMaxBlueJTextField(javax::swing::JTextField* maxBlueJTextField);

    public: javax::swing::JTextField* getMaxGreenJTextField();

    public: void setMaxGreenJTextField(javax::swing::JTextField* maxGreenJTextField);

    public: javax::swing::JTextField* getMaxRedJTextField();

    public: void setMaxRedJTextField(javax::swing::JTextField* maxRedJTextField);

    public: javax::swing::JTextField* getMinBlueJTextField();

    public: void setMinBlueJTextField(javax::swing::JTextField* minBlueJTextField);

    public: javax::swing::JTextField* getMinGreenJTextField();

    public: void setMinGreenJTextField(javax::swing::JTextField* minGreenJTextField);

    public: javax::swing::JTextField* getMinRedJTextField();

    public: void setMinRedJTextField(javax::swing::JTextField* minRedJTextField);

    private: javax::swing::JDialog* analysisActionJDialog;

    private: javax::swing::JMenuItem* analyzeJMenuItem;

    private: javax::swing::JLabel* blueJLabel;

    private: javax::swing::JLabel* colorRangeJLabel;

    private: javax::swing::JMenuItem* createStripImageJMenuItem;

    private: javax::swing::JMenu* fileJMenu;

    private: javax::swing::JMenuItem* generateSpriteSplitterMenuItem;

    private: javax::swing::JMenuItem* generateRotationMenuItem;

    private: javax::swing::JMenuItem* generateMirrorSpriteMenuItem;

    private: javax::swing::JMenuItem* generateRotationSpriteJMenuItem;

    private: javax::swing::JLabel* greenJLabel;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JMenuBar* mainJMenuBar;

    private: javax::swing::JTextField* maxBlueJTextField;

    private: javax::swing::JTextField* maxGreenJTextField;

    private: javax::swing::JLabel* maxJLabel;

    private: javax::swing::JTextField* maxRedJTextField;

    private: javax::swing::JTextField* minBlueJTextField;

    private: javax::swing::JTextField* minGreenJTextField;

    private: javax::swing::JLabel* minJLabel;

    private: javax::swing::JTextField* minRedJTextField;

    private: javax::swing::JMenuItem* mirrorJMenuItem;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JMenuItem* openImageJMenuItem;

    private: javax::swing::JMenu* processingJMenu;

    private: javax::swing::JLabel* redJLabel;

    private: javax::swing::JMenuItem* scaleImagesJMenuItem;

    private: javax::swing::JMenuItem* canvasImagesJMenuItem;

    private: javax::swing::JMenuItem* createIconImagesJMenuItem;

    private: javax::swing::JLabel* titleJLabel;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/util/Arrays.h>)
#include <java/util/Arrays.h>
#endif
#if __has_include(<java/util/Comparator.h>)
#include <java/util/Comparator.h>
#endif
#if __has_include(<javax/imageio/ImageIO.h>)
#include <javax/imageio/ImageIO.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/FileJDialog.h>)
#include <org/allbinary/gui/dialog/FileJDialog.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/FileJDialogListenerInterface.h>)
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageProcessorInput.h>)
#include <org/allbinary/media/image/ImageProcessorInput.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>)
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ColorRange.h>)
#include <org/allbinary/media/image/analysis/ColorRange.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ColorRangeInterface.h>)
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ImageAnalysis.h>)
#include <org/allbinary/media/image/analysis/ImageAnalysis.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ImageAnalysisResults.h>)
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/image/gui/JFrame.h")
#include "org/allbinary/image/gui/JFrame.h"
#endif
#if __has_include("org/allbinary/image/gui/JDialog.h")
#include "org/allbinary/image/gui/JDialog.h"
#endif
#if __has_include("org/allbinary/image/gui/JLabel.h")
#include "org/allbinary/image/gui/JLabel.h"
#endif
#if __has_include("org/allbinary/image/gui/JTextField.h")
#include "org/allbinary/image/gui/JTextField.h"
#endif
#if __has_include("org/allbinary/image/gui/JButton.h")
#include "org/allbinary/image/gui/JButton.h"
#endif
#if __has_include("org/allbinary/image/gui/JPanel.h")
#include "org/allbinary/image/gui/JPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/JMenuBar.h")
#include "org/allbinary/image/gui/JMenuBar.h"
#endif
#if __has_include("org/allbinary/image/gui/JMenu.h")
#include "org/allbinary/image/gui/JMenu.h"
#endif
#if __has_include("org/allbinary/image/gui/JMenuItem.h")
#include "org/allbinary/image/gui/JMenuItem.h"
#endif
#if __has_include("org/allbinary/image/gui/Dimension.h")
#include "org/allbinary/image/gui/Dimension.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionListener.h")
#include "org/allbinary/image/gui/ActionListener.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionEvent.h")
#include "org/allbinary/image/gui/ActionEvent.h"
#endif
#if __has_include("org/allbinary/image/gui/GroupLayout.h")
#include "org/allbinary/image/gui/GroupLayout.h"
#endif
#if __has_include("org/allbinary/image/gui/Short.h")
#include "org/allbinary/image/gui/Short.h"
#endif
#if __has_include("org/allbinary/image/gui/GridLayout.h")
#include "org/allbinary/image/gui/GridLayout.h"
#endif
#if __has_include("org/allbinary/image/gui/ImageUnifierJPanel.h")
#include "org/allbinary/image/gui/ImageUnifierJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/ImageAnalysisResultsJPanel.h")
#include "org/allbinary/image/gui/ImageAnalysisResultsJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/RotationSpriteImageJPanel.h")
#include "org/allbinary/image/gui/RotationSpriteImageJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/SpriteSplitterImageJPanel.h")
#include "org/allbinary/image/gui/SpriteSplitterImageJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/RotationImageJPanel.h")
#include "org/allbinary/image/gui/RotationImageJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/ResizeImageJPanel.h")
#include "org/allbinary/image/gui/ResizeImageJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/CreateIconImagesJPanel.h")
#include "org/allbinary/image/gui/CreateIconImagesJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/CanvasImageJPanel.h")
#include "org/allbinary/image/gui/CanvasImageJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/MirrorSpriteImageJPanel.h")
#include "org/allbinary/image/gui/MirrorSpriteImageJPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/MirrorImageJPanel.h")
#include "org/allbinary/image/gui/MirrorImageJPanel.h"
#endif

        #endif
    
