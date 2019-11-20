"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function sendEmail(name, to, pass) {
    const mailjet = require('node-mailjet')
        .connect('6314e4525f313395aee136431b53ad12', 'a43e56655405a3d5f8df411e6087bb90');
    const request = mailjet
        .post("send", { 'version': 'v3.1' })
        .request({
        "Messages": [
            {
                "From": {
                    "Email": "raul1698@gmail.com",
                    "Name": "Alie Storage"
                },
                "To": [
                    {
                        "Email": to,
                        "Name": name
                    }
                ],
                "Subject": "Confirmation email",
                "TextPart": "My first Mailjet email",
                "HTMLPart": `<h3>Welcome to Alie Storage, thank you for chosing our service.
      <br>Your temporary password is: ${pass}</h3><br/>
      If this isn't your email, just ommit it`,
                "CustomID": "AppGettingStartedTest"
            }
        ]
    });
    request
        .then((result) => {
        console.log(result.body);
    })
        .catch((err) => {
        console.log(err.statusCode);
        console.log(err.message);
    });
}
exports.default = sendEmail;
