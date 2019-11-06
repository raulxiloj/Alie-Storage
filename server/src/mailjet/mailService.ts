export default function sendEmail(to: string){
    const mailjet = require ('node-mailjet')
.connect('6314e4525f313395aee136431b53ad12', 'a43e56655405a3d5f8df411e6087bb90')
const request = mailjet
.post("send", {'version': 'v3.1'})
.request({
  "Messages":[
    {
      "From": {
        "Email": "raul1698@gmail.com",
        "Name": "Raul"
      },
      "To": [
        {
          "Email": to,
          "Name": "Raul"
        }
      ],
      "Subject": "Greetings from Mailjet.",
      "TextPart": "My first Mailjet email",
      "HTMLPart": "<h3>Dear passenger 1, welcome to <a href='https://www.mailjet.com/'>Mailjet</a>!</h3><br />May the delivery force be with you!",
      "CustomID": "AppGettingStartedTest"
    }
  ]
})
request
  .then((result:Response) => {
    console.log(result.body)
  })
  .catch((err: any) => {
    console.log(err.statusCode);
  })

}
