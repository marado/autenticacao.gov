/* ****************************************************************************

 * eID Middleware Project.
 * Copyright (C) 2008-2009 FedICT.
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version
 * 3.0 as published by the Free Software Foundation.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, see
 * http://www.gnu.org/licenses/.

**************************************************************************** */
/**
* ATTENTION: THIS FILE IS GENERATED BY AN EXCEL MACRO
* ALL CHANGES MADE IN THIS CURRENT FILE WILL BE LOST BY NEXT EXPORT
* If you want to add/change a string or a translation,
* please do it in the language.xls file
* and then click on the export button.
* This will generated a whole new file.
*/

#ifndef __DLGS_LANGUAGE_H__
#define __DLGS_LANGUAGE_H__

#include <string>

namespace eIDMW
{

class CLang;

#define DEFINE_LANG_STR(code) static const wchar_t * const LANG_STR_ ## code []

#define LANG_STRCODE_EN L"EN"
#define LANG_STRCODE_NL L"NL"
#define LANG_STRCODE_FR L"FR"
#define LANG_STRCODE_DE L"DE"

typedef enum {
  LANG_EN=0,
  LANG_NL=1,
  LANG_FR=2,
  LANG_DE=3
} tLanguage;

DEFINE_LANG_STR(Yes) = {L"&Yes", L"&Sim", L"&Oui", L"&Ja"};
DEFINE_LANG_STR(No) = {L"&No", L"&Nao", L"&Non", L"&Nein"};
DEFINE_LANG_STR(Ok) = {L"&OK", L"&OK", L"O&k", L"&Ok"};
DEFINE_LANG_STR(Cancel) = {L"&Cancel", L"&Cancelar", L"&Annuler", L"&Abbrechen"};
DEFINE_LANG_STR(CancelNo) = {L"&Cancel (No)", L"&Cancelar (Nao)", L"&Annuler", L"&Abbrechen (Nein)"};
DEFINE_LANG_STR(Pin) = {L"PIN", L"PIN", L"PIN", L"PIN"};
DEFINE_LANG_STR(Puk) = {L"PUK", L"PUK", L"PUK", L"PUK"};
DEFINE_LANG_STR(Retry) = {L"&Retry", L"Repetir", L"&R�essayer", L"&Erneut versuchen"};
DEFINE_LANG_STR(Always) = {L"&Always", L"&Sempre", L"&Toujours", L"&Immer"};
DEFINE_LANG_STR(Never) = {L"Ne&ver", L"Nunca", L"&Jamais", L"&Nie"};
DEFINE_LANG_STR(Belpic) = {L"Belpic", L"Belpic", L"Belpic", L"Belpic"};
DEFINE_LANG_STR(Application) = {L"Application:", L"Aplicacao:", L"Application:", L"Anwendung:"};
DEFINE_LANG_STR(Function) = {L"Function:", L"Funcao:", L"Fonction:", L"Funktion:"};
DEFINE_LANG_STR(AnApplicationWantsToAccessTheCard) = {L"An Application wants to access the card !", L"Uma aplica��o esta a tentar ler o cartao !", L"Une application essaye d'acc�der � la carte !", L"Eine Anwendung will auf die Karte zugreifen!"};
DEFINE_LANG_STR(ReadIdentityData) = {L"Read Identity data", L"A Ler dados do cart�o", L"Lire les informations d'identit�e", L"Identit�tsdaten lesen"};
DEFINE_LANG_STR(ReadPhoto) = {L"Read Photo", L"Foto lezen", L"Lire la photo", L"Bild lesen"};
DEFINE_LANG_STR(ReadAddressData) = {L"Read Address data", L"Adresgegevens lezen", L"Lire l'adresse", L"Adressdaten lesen"};
DEFINE_LANG_STR(ReadCertificates) = {L"Read Certificates", L"Certificaten lezen", L"Lire les certificats", L"Zertifikate lesen"};
DEFINE_LANG_STR(ReadUnknownData) = {L"Read Unknown data", L"Onbekende data lezen", L"Lire des donn�es", L"Unbekannte Daten lesen"};
DEFINE_LANG_STR(DoYouWantToAcceptIt) = {L"Do you want to accept it ?", L"Deseja aceitar ?", L"Acceptez-vous ?", L"M�chten Sie akzeptieren?"};
DEFINE_LANG_STR(ForAllOperations) = {L"For all operations", L"Para todas as operacoes", L"Pour toutes les op�rations", L"F�r alle Funktionen"};
DEFINE_LANG_STR(EnterYourPin) = {L"Enter your PIN", L"Introduza o PIN", L"Entrer votre code PIN", L"PIN eingeben"};
DEFINE_LANG_STR(Asking) = {L"Asking", L"Pedir", L"Entrez", L"Eingeben"};
DEFINE_LANG_STR(SigningWith) = {L"Signing with", L"Assinar com", L"Signez avec", L"Unterschreiben mit"};
DEFINE_LANG_STR(PrivacyFilter) = {L"Privacy Filter", L"Filtro de privacidade", L"Privacy Filter", L"Datenschutz-Filter"};
DEFINE_LANG_STR(EnterYour) = {L"Enter your", L"Introduza o seu", L"Entrez votre", L"Geben Sie Ihre"};
DEFINE_LANG_STR(ForVerification) = {L"for verification", L"voor verificatie", L"pour v�rification", L"zwecks Best�tigung"};
DEFINE_LANG_STR(ToUnblock) = {L"to unblock", L"para desbloquear", L"pour d�bloquer", L"um freizugeben"};
DEFINE_LANG_STR(Code) = {L"code", L"c�digo", L"code", L"Kennzahl"};
DEFINE_LANG_STR(AndSigning) = {L"and signing", L"e assinar", L"et signature", L"und Unterschrift"};
DEFINE_LANG_STR(AndSign) = {L"and sign", L"e assinar", L"et signer", L"und unterschreiben"};
DEFINE_LANG_STR(RenewingPinCode) = {L"Change PIN code", L"Alterar c�digo PIN", L"Changement de code", L"PIN-Kennzahl erneuern"};
DEFINE_LANG_STR(CurrentPin) = {L"Current PIN", L"PIN Atual", L"Code actuel", L"Aktuelle PIN"};
DEFINE_LANG_STR(NewPin) = {L"New PIN", L"Novo PIN", L"Nouveau", L"Neue PIN"};
DEFINE_LANG_STR(ConfirmNewPin) = {L"Confirm new PIN", L"Confirmar novo PIN", L"Confimez", L"Neue PIN best�tigen"};
DEFINE_LANG_STR(EnterYourNewPinCode) = {L"Enter your New PIN code", L"Introduza o novo c�digo PIN", L"Entrez votre nouveau code PIN", L"Neue PIN-Kennzahl eingeben"};
DEFINE_LANG_STR(EnterYourNewPinCodeAgainToConfirm) = {L"Enter your New PIN code again to confirm", L"Introduza novamente o novo c�digo PIN", L"Confimez votre nouveau code PIN", L"Neue PIN-Kennzahl erneut best�tigen"};
DEFINE_LANG_STR(ErrorTheNewPinCodesAreNotIdentical) = {L"Error: The new PIN codes are not identical", L"Erro: os novos PINs n�o s�o iguais", L"Erreur: Les codes PIN ne sont pas identiques", L"Fehler: Die PIN-Kennzahlen sind nicht identisch"};
DEFINE_LANG_STR(RetryEnterYourNewPinCode) = {L"Retry: Enter your New PIN code", L"Repetir: Introduza o novo c�digo PIN", L"R�essayez: Entrez votre nouveau code PIN", L"Erneut versuchen: Neue PIN-Kennzahl eingeben"};
DEFINE_LANG_STR(Bad) = {L"Bad", L"Erro", L"Erreur", L"Fehler"};
DEFINE_LANG_STR(Notification) = {L"Notification", L"Aten��o", L"Notification", L"Meldung"};
DEFINE_LANG_STR(RemainingAttempts) = {L"remaining attempts", L"tentativas restantes", L"essais restants", L"�brige Versuche"};
DEFINE_LANG_STR(TryAgainOrCancel) = {L"Try again or cancel?", L"Tentar novamente ou cancelar?", L"Essayez encore ou annulez", L"Erneut versuchen oder abbrechen?"};
DEFINE_LANG_STR(PinBlocked) = {L"PIN blocked", L"PIN bloqueado", L"Code PIN bloqu�", L"PIN gesperrt"};
DEFINE_LANG_STR(PinpadInfo) = {L"Pinpad info", L"Pinpad info", L"Pinpad info", L"Pinpad-Info"};
DEFINE_LANG_STR(Message) = {L"Message", L"Mensagem", L"Message", L"Nachricht"};
DEFINE_LANG_STR(SignaturePin) = {L"Signature PIN", L"PIN de assinatura", L"Signature PIN", L"Unterschrift-PIN"};
DEFINE_LANG_STR(AuthenticationPin) = {L"Authentication PIN", L"PIN de autentica��o", L"Authentification PIN", L"Authentisierungs-PIN"};
DEFINE_LANG_STR(TheRootCertificateIsNotCorrect) = {L"The Root Certificate is not correct.", L"O certificado de Root está incorrecto.", L"Le certificat Root n'est pas correct.", L"Das Root-Zertifikat ist nicht korrekt."};
DEFINE_LANG_STR(ThisMayBeATestCard) = {L"This may be a test card.", L"Este pode ser um cartao de testes.", L"Il s'agit peut-�tre d'une carte de test.", L"Dies kann eine Testkarte sein."};
DEFINE_LANG_STR(PleaseEnterTheCorrectEidCard) = {L"Please enter the correct eID card.", L"Introduza um cart�o v�lido.", L"Ins�rez une carte valide.", L"Bitte geben Sie die richtige eID-Karte ein."};
DEFINE_LANG_STR(Caution) = {L"Caution:", L"Aten��o:", L"Attention:", L"Achtung:"};
DEFINE_LANG_STR(YouAreAboutToMakeALegallyBindingElectronic) = {L"You are about to make a legally binding electronic signature with your identity card.", L"Vai realizar uma assinatura eletr�nica v�lida com o seu Cart�o de Cidad�o.", L"Vous allez apposer une signature �lectronique juridiquement valide avec votre carte d'identit�", L"Mit Ihrem Personalausweis werden Sie eine rechtsg�ltige elektronische Unterschrift eingeben."};
DEFINE_LANG_STR(PleaseEnterYourPin) = {L"Please enter your PIN", L"Introduza o c�digo PIN", L"Entrez votre code PIN", L"Bitte geben Sie Ihre PIN ein"};
DEFINE_LANG_STR(PleaseEnterYourPinOnThePinpadReader) = {L"Please enter your PIN on the pinpad reader", L"Por favor, introduza o PIN no seu leitor PINPAD.", L"Entrez votre code PIN sur le clavier du lecteur de carte", L"Bitte geben Sie Ihre PIN am Kartenleseger�t ein"};
DEFINE_LANG_STR(ToContinueOrClickTheCancelButton) = {L"to continue or click the Cancel button.", L"para continuar ou clique em cancelar", L"ou cliquez sur le bouton Annuler.", L"um fortzufahren, oder klicken Sie auf die Schaltfl�che \"Abbrechen\"."};
DEFINE_LANG_STR(Warning) = {L"Warning:", L"Aviso:", L"Avertissement:", L"Warnung:"};
DEFINE_LANG_STR(IfYouOnlyWantToLogOnToA) = {L"If you only want to log on to a web site or server, do NOT enter your PIN and click the Cancel button.", L"If you only want to log on to a web site or server, do NOT enter your PIN and click the Cancel button.", L"Si vous d�sirez seulement vous connecter � un site ou un serveur, n'entrez PAS votre code PIN.", L"Wenn Sie nur auf das Internet oder einen Server gehen m�chten, geben Sie bitte Ihre PIN NICHT ein."};
DEFINE_LANG_STR(InOrderToAuthenticateYourself) = {L"in order to authenticate yourself.", L"para se autenticar", L"pour vous authentifier.", L"um sich zu authentisieren"};
DEFINE_LANG_STR(ChangeYourPinOnTheReader) = {L"Change your PIN on the reader", L"Change your PIN on the reader", L"Modifiez votre code PIN sur le lecteur de carte", L"Bitte �ndern Sie Ihren PIN am Kartenleseger�t"};
DEFINE_LANG_STR(PleaseEnterYourPuk) = {L"Please enter your PUK", L"Introduza o cod. PUK", L"Entrez votre code PUK", L"Bitte geben Sie Ihren PUK ein"};
DEFINE_LANG_STR(PleaseEnterYourPukOnThePinpadReader) = {L"Please enter your PUK on the pinpad reader", L"Por favor, introduza o c�digo PUK no seu leitor PINPAD.", L"Entrez votre code PUK sur le clavier du lecteur de carte", L"Bitte geben Sie Ihren PUK am Kartenleseger�t ein"};
DEFINE_LANG_STR(Your) = {L"your", L"seu", L"votre", L"Ihre"};
DEFINE_LANG_STR(ChangeYourPin) = {L"Change your PIN", L"Alterar PIN", L"Modifiez votre code PIN", L"Bitte �ndern Sie Ihren PIN"};
DEFINE_LANG_STR(ChangeYourPuk) = {L"Change your PUK", L"Alterar PUK", L"Modifiez votre code PUK", L"Bitte �ndern Sie Ihren PUK"};
DEFINE_LANG_STR(OnTheReader) = {L"on the reader", L"no leitor", L"sur le lecteur de carte", L"am Kartenleseger�t"};
DEFINE_LANG_STR(TheFollowingApplication1IsTrying) = {L"The following application '%1' is trying to read data on the eID card.\n\nDo you allow that?", L"A aplicacao '%1' esta a tentar aceder ao cartao.\nDeseja permitir?", L"Cette application '%1' essaye de lire vos donn�es sur la carte eID.\n\nAcceptez-vous?", L"Das folgende Programm '%1' versucht, Daten auf der eID-Karte zu lesen.\n\nErlauben Sie das?"};
DEFINE_LANG_STR(UnknownApplication) = {L"??? Unknown application ???", L"??? Aplicacao desconhecida ???", L"??? Application inconnue ???", L"??? Unbekannt Anwendung ???"};
DEFINE_LANG_STR(PathOfTheApplication) = {L"PATH of the application :", L"Caminho para a aplicacao :", L"EMPLACEMENT de l'application :", L"PFAD der Anwendung :"};
//DEFINE_LANG_STR(EnterOldNewVerify) = {L"Please enter your old PIN, followed by your new PIN and then enter your new PIN once more for verification purposes.", L"Geef eerst uw oude PIN in, nadien uw nieuwe PIN, en ten slotte ter controle nogmaals uw nieuwe PIN.", L"Veillez d'abord introduire votre ancien code PIN et ensuite votre nouveau code PIN. Pour terminer, veuillez r�introduire votre nouveau code PIN � des fins de v�rification.", L"Geben Sie zun�chst Ihre alte PIN ein, dann Ihre neue PIN und abschlie�end zur Kontrolle noch einmal Ihre neue PIN."};
DEFINE_LANG_STR(EnterOldNewVerify) = {L"1) Enter your old PIN and press 'OK'. \n2) Enter your new PIN and press 'OK'.\n3) Enter your new PIN again and press 'OK'.",
																			L"1) Introduza o seu PIN atual e clique em 'OK'. \n2) Introduza o seu novo PIN e clique em 'OK'.\n3) Introduza novamente o seu novo PIN e clique em 'OK'.",
																			L"1) Ins�rez votre ancien code PIN et appuyez sur ��OK��.\n2) Ins�rez votre nouveau code PIN et appuyez sur ��OK��.\n3) Ins�rez une nouvelle fois votre nouveau code PIN et appuyez sur ��OK��.",
																			L"1) Geben Sie Ihre alte PIN ein und dr�cken Sie 'OK'.\n2) Geben Sie Ihre neue PIN ein und dr�cken Sie 'OK'.\n3) Geben Sie Ihre neue PIN erneut ein und dr�cken Sie 'OK'."};

#define GETSTRING_DLG(code) LANG_STR_ ## code[CLang::GetLang()]
#ifndef WIN32
#define GETQSTRING_DLG(code) QString::fromWCharArray(LANG_STR_ ## code[CLang::GetLang()])
#endif

}

#endif // __DLGS_LANGUAGE_H__
