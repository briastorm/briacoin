#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("BriaBridge", "Overview"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Send"),
QT_TRANSLATE_NOOP("BriaBridge", "Receive"),
QT_TRANSLATE_NOOP("BriaBridge", "Transactions"),
QT_TRANSLATE_NOOP("BriaBridge", "Address Book"),
QT_TRANSLATE_NOOP("BriaBridge", "Chat"),
QT_TRANSLATE_NOOP("BriaBridge", "Notifications"),
QT_TRANSLATE_NOOP("BriaBridge", "Options"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("BriaBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Advanced"),
QT_TRANSLATE_NOOP("BriaBridge", "Backup"),
QT_TRANSLATE_NOOP("BriaBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("BriaBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Tools"),
QT_TRANSLATE_NOOP("BriaBridge", "Chain Data"),
QT_TRANSLATE_NOOP("BriaBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("BriaBridge", "Sign Message"),
QT_TRANSLATE_NOOP("BriaBridge", "Verify Message"),
QT_TRANSLATE_NOOP("BriaBridge", "Debug"),
QT_TRANSLATE_NOOP("BriaBridge", "About Bria"),
QT_TRANSLATE_NOOP("BriaBridge", "About QT"),
QT_TRANSLATE_NOOP("BriaBridge", "QR code"),
QT_TRANSLATE_NOOP("BriaBridge", "Address:"),
QT_TRANSLATE_NOOP("BriaBridge", "Label:"),
QT_TRANSLATE_NOOP("BriaBridge", "Narration:"),
QT_TRANSLATE_NOOP("BriaBridge", "Amount:"),
QT_TRANSLATE_NOOP("BriaBridge", "BRIA"),
QT_TRANSLATE_NOOP("BriaBridge", "mBRIA"),
QT_TRANSLATE_NOOP("BriaBridge", "µBRIA"),
QT_TRANSLATE_NOOP("BriaBridge", "Briashi"),
QT_TRANSLATE_NOOP("BriaBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("BriaBridge", "Normal"),
QT_TRANSLATE_NOOP("BriaBridge", "Stealth"),
QT_TRANSLATE_NOOP("BriaBridge", "BIP32"),
QT_TRANSLATE_NOOP("BriaBridge", "Add Address"),
QT_TRANSLATE_NOOP("BriaBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("BriaBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("BriaBridge", "Address Type"),
QT_TRANSLATE_NOOP("BriaBridge", "Group"),
QT_TRANSLATE_NOOP("BriaBridge", "Label"),
QT_TRANSLATE_NOOP("BriaBridge", "Address"),
QT_TRANSLATE_NOOP("BriaBridge", "Public Key"),
QT_TRANSLATE_NOOP("BriaBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("BriaBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("BriaBridge", "Market"),
QT_TRANSLATE_NOOP("BriaBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("BriaBridge", "Coin Control"),
QT_TRANSLATE_NOOP("BriaBridge", "Make payment"),
QT_TRANSLATE_NOOP("BriaBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("BriaBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("BriaBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("BriaBridge", "Quantity:"),
QT_TRANSLATE_NOOP("BriaBridge", "Fee:"),
QT_TRANSLATE_NOOP("BriaBridge", "After Fee:"),
QT_TRANSLATE_NOOP("BriaBridge", "Bytes:"),
QT_TRANSLATE_NOOP("BriaBridge", "Priority:"),
QT_TRANSLATE_NOOP("BriaBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("BriaBridge", "Change:"),
QT_TRANSLATE_NOOP("BriaBridge", "Custom change address"),
QT_TRANSLATE_NOOP("BriaBridge", "From account"),
QT_TRANSLATE_NOOP("BriaBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("BriaBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("BriaBridge", "Balance:"),
QT_TRANSLATE_NOOP("BriaBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("BriaBridge", "To account"),
QT_TRANSLATE_NOOP("BriaBridge", "Pay to"),
QT_TRANSLATE_NOOP("BriaBridge", "Narration"),
QT_TRANSLATE_NOOP("BriaBridge", "Amount"),
QT_TRANSLATE_NOOP("BriaBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("BriaBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("BriaBridge", "Clear All"),
QT_TRANSLATE_NOOP("BriaBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("BriaBridge", "Send Payment"),
QT_TRANSLATE_NOOP("BriaBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("BriaBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("BriaBridge", "Type"),
QT_TRANSLATE_NOOP("BriaBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("BriaBridge", "New Address"),
QT_TRANSLATE_NOOP("BriaBridge", "Copy Address"),
QT_TRANSLATE_NOOP("BriaBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("BriaBridge", "Date"),
QT_TRANSLATE_NOOP("BriaBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("BriaBridge", "Delete"),
QT_TRANSLATE_NOOP("BriaBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("BriaBridge", "Name:"),
QT_TRANSLATE_NOOP("BriaBridge", "Public Key:"),
QT_TRANSLATE_NOOP("BriaBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("BriaBridge", "Choose identity"),
QT_TRANSLATE_NOOP("BriaBridge", "Identity:"),
QT_TRANSLATE_NOOP("BriaBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("BriaBridge", "Group name:"),
QT_TRANSLATE_NOOP("BriaBridge", "Create Group"),
QT_TRANSLATE_NOOP("BriaBridge", "Invite others"),
QT_TRANSLATE_NOOP("BriaBridge", "Search"),
QT_TRANSLATE_NOOP("BriaBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("BriaBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("BriaBridge", "Invite"),
QT_TRANSLATE_NOOP("BriaBridge", "GROUP"),
QT_TRANSLATE_NOOP("BriaBridge", "BOOK"),
QT_TRANSLATE_NOOP("BriaBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("BriaBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("BriaBridge", "CHAT"),
QT_TRANSLATE_NOOP("BriaBridge", "Leave Group"),
QT_TRANSLATE_NOOP("BriaBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("BriaBridge", "Coin Value"),
QT_TRANSLATE_NOOP("BriaBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("BriaBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("BriaBridge", "Spends"),
QT_TRANSLATE_NOOP("BriaBridge", "Least Depth"),
QT_TRANSLATE_NOOP("BriaBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("BriaBridge", "Refresh"),
QT_TRANSLATE_NOOP("BriaBridge", "Hash"),
QT_TRANSLATE_NOOP("BriaBridge", "Height"),
QT_TRANSLATE_NOOP("BriaBridge", "Timestamp"),
QT_TRANSLATE_NOOP("BriaBridge", "Value Out"),
QT_TRANSLATE_NOOP("BriaBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("BriaBridge", "Main"),
QT_TRANSLATE_NOOP("BriaBridge", "Network"),
QT_TRANSLATE_NOOP("BriaBridge", "Window"),
QT_TRANSLATE_NOOP("BriaBridge", "Display"),
QT_TRANSLATE_NOOP("BriaBridge", "I2P"),
QT_TRANSLATE_NOOP("BriaBridge", "Tor"),
QT_TRANSLATE_NOOP("BriaBridge", "Start Bria on system login"),
QT_TRANSLATE_NOOP("BriaBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("BriaBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("BriaBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("BriaBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("BriaBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("BriaBridge", "Reserve:"),
QT_TRANSLATE_NOOP("BriaBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("BriaBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("BriaBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("BriaBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("BriaBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("BriaBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("BriaBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("BriaBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("BriaBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("BriaBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("BriaBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("BriaBridge", "Details"),
QT_TRANSLATE_NOOP("BriaBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("BriaBridge", "Port:"),
QT_TRANSLATE_NOOP("BriaBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("BriaBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("BriaBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("BriaBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("BriaBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("BriaBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("BriaBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("BriaBridge", "Notifications:"),
QT_TRANSLATE_NOOP("BriaBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("BriaBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("BriaBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("BriaBridge", "Cancel"),
QT_TRANSLATE_NOOP("BriaBridge", "Apply"),
QT_TRANSLATE_NOOP("BriaBridge", "Ok"),
QT_TRANSLATE_NOOP("BriaBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("BriaBridge", "Password"),
QT_TRANSLATE_NOOP("BriaBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("BriaBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("BriaBridge", "Language"),
QT_TRANSLATE_NOOP("BriaBridge", "English"),
QT_TRANSLATE_NOOP("BriaBridge", "French"),
QT_TRANSLATE_NOOP("BriaBridge", "Japanese"),
QT_TRANSLATE_NOOP("BriaBridge", "Spanish"),
QT_TRANSLATE_NOOP("BriaBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("BriaBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("BriaBridge", "Next Step"),
QT_TRANSLATE_NOOP("BriaBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("BriaBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("BriaBridge", "Important!"),
QT_TRANSLATE_NOOP("BriaBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("BriaBridge", "Back"),
QT_TRANSLATE_NOOP("BriaBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("BriaBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("BriaBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("BriaBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("BriaBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("BriaBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("BriaBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("BriaBridge", "Accounts"),
QT_TRANSLATE_NOOP("BriaBridge", "ID"),
QT_TRANSLATE_NOOP("BriaBridge", "Name"),
QT_TRANSLATE_NOOP("BriaBridge", "Created"),
QT_TRANSLATE_NOOP("BriaBridge", "Active Account"),
QT_TRANSLATE_NOOP("BriaBridge", "Default"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("BriaBridge", "Path"),
QT_TRANSLATE_NOOP("BriaBridge", "Active"),
QT_TRANSLATE_NOOP("BriaBridge", "Master"),
QT_TRANSLATE_NOOP("BriaBridge", "Make Default"),
QT_TRANSLATE_NOOP("BriaBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("BriaBridge", "Set as Master"),
QT_TRANSLATE_NOOP("BriaBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("BriaBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("BriaBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("BriaBridge", "0 active connections to BriaCoin network"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("BriaBridge", "Open chat list"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("BriaBridge", "Inputs"),
QT_TRANSLATE_NOOP("BriaBridge", "Values"),
QT_TRANSLATE_NOOP("BriaBridge", "Outputs"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a BriaCash address to sign the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("BriaBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("BriaBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a BriaCash address to verify the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a BriaCash signature"),
QT_TRANSLATE_NOOP("BriaBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("BriaBridge", "Your total balance"),
QT_TRANSLATE_NOOP("BriaBridge", "Balances overview"),
QT_TRANSLATE_NOOP("BriaBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("BriaBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("BriaBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("BriaBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("BriaBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("BriaBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("BriaBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("BriaBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("BriaBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("BriaBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("BriaBridge", "The label for this address"),
QT_TRANSLATE_NOOP("BriaBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("BriaBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("BriaBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("BriaBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("BriaBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("BriaBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("BriaBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("BriaBridge", "Short payment note."),
QT_TRANSLATE_NOOP("BriaBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("BriaBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("BriaBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("BriaBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter a password"),
QT_TRANSLATE_NOOP("BriaBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("BriaBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("BriaBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("BriaBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("BriaBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
