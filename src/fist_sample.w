\font\vbffont=cmtt8 at 4pt
\def\verbootem{\begingroup
  \def\do##1{\catcode`##1=12 } \dospecials
  \parskip 0pt \parindent 152pt \let\!=!
  \catcode`\ =13 \catcode`\^^M=13
  \catcode`\!=0 \verbatimdefs \verbatimgobble}
{\catcode`\^^M=13{\catcode`\ =13\gdef\verbatimdefs{\def^^M{\ \par}\let =\ }} %
  \gdef\verbatimgobble#1^^M{}}
\vbox{\vbffont
\baselineskip=0pt
\verbootem
!                                     *********
!                                 *************
!                    ********     **************
!                 *************   **************
!               ***************   **************   *************
!               ***************   **************   **************
!               ***************   *************** ***************
!          **   ***************   *************** ***************
!    ********** ***************   *************** ***************
!  ************* ***************  *************** ***************
! **************  **************  **************  ***************
! *************** **************  **************  ***************
! *************** *************** **************  ***************
! *************** *************** **************  *************
!  ******************************  *************  *************
!  *************** **************  *************  ************
!   ****************************** *************  *********
!     ************* **************  ***********          **********
!      ************  *************  ******           ***************
!       ***********  *************               ********************
!        **********  **************   *********************************
!         *********   *************   *********************************
!             ****    ***********     **********************************
!                     ***********     ***********************************
!       ***********    **********     *************************************
!      ****************                ************************************
!     **********************            ***********   **********************
!     ***************************                  **************************
!     ************************************************************************
!     *************************************************************************
!     *************************************************************************
!     *************************************************************************
!      ************************************************************************
!       **********************************************************************
!         *******************************************************************
!         ******************************************************************
!          ****************************************************************
!             ************************************************************
!             **********************************************************
!             *********************************************************
!              *******************************************************
!                 *************************************************
!                  ***********************************************
!                  *********************************************
!                  ********************************************
!                   *****************************************
!                   ****************************************
!                    **************************************
!                     *************************************
!                     **********************************
!                     *********************************
!                     *********************************
!                   ***********************************
!                  ************************************
!                  ***********************************
!                  ***********************************
!                 ************************************
!                 ************************************
!                 ************************************
!                 ************************************
!                *************************************
!                *************************************
!               **************************************
!               ***************************************
!               ***************************************
!              ****************************************
!              ****************************************
!              ****************************************
!             *****************************************
!             *****************************************
!             *****************************************
!            ******************************************
!            ******************************************
!           *******************************************
!           *******************************************
!           *******************************************
!          ********************************************
!          ********************************************
!         *********************************************
!         *********************************************
!         *********************************************
!         *********************************************
!         *********************************************
!            ******************************************
!                   ***********************************
!                                        **************
!endgroup
\vskip 12pt
\verbootem

! N   N   EEEEE   RRRR    DDDD            PPPP     OOO    W   W   EEEEE   RRRR
! NN  N   E       R   R   D   D           P   P   O   O   W   W   E       R   R
! N   N   E       R   R   D   D           P   P   O   O   W   W   E       R   R
! N N N   EEE     RRRR    D   D           PPPP    O   O   W   W   EEE     RRRR
! N   N   E       R R     D   D           P       O   O   W W W   E       R R
! N  NN   E       R  R    D   D           P       O   O   WW WW   E       R  R
! N   N   EEEEE   R   R   DDDD            P        OOO    W   W   EEEEE   R   R
!endgroup
}
